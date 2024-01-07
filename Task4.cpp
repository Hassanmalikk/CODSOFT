#include<iostream>
#include<list>
using namespace std;

class ToDOList {
	list<::pair<string, bool>> todo;
	bool completed;

public:
	ToDOList()
	{
		completed = false;
	}
	void AddTask(string t)
	{
		todo.push_back(make_pair(t,false));
	}
	void DeleteTask(string t)
	{
		if (todo.empty())
		{
			cout << "No tasks to be  deleted" << endl;
		}
		bool deleted = false;
		list<::pair<string,bool>>::iterator itd;
		itd = todo.begin();
		
		for (itd = todo.begin(); itd != todo.end(); itd++)
		{
			if (t == itd->first )
			{
				itd = todo.erase(itd);
				deleted = true;
				break;
			}
		}
		if (deleted == false)
		{
			cout << "No task with this name.Not deleted" << endl;
		}

	}
	void MarkCompleted(string t)
	{
		bool complete = false;
		if (todo.empty())
		{
			cout << "No tasks to be marked completed" << endl;
		}
		list<::pair<string, bool>>::iterator it;
		
		for (it = todo.begin(); it != todo.end(); it++)
		{
			if (t == it->first)
			{
				it->second = true;
				complete = true;
				break;
			}
		}
		if (complete == false)
		{
			cout << "No task with this name.Not marked completed" << endl;
		}
	}

	void PrintList()
	{
	int	count = 1;
	if (todo.empty())
	{
		cout << "No tasks to be marked viewed. Enter tasks first" << endl;
	}
	list<::pair<string, bool>>::iterator it;
		for (it = todo.begin(); it != todo.end(); it++)
		{
			if (it->second == true)
			{


				cout << "Task " << count << ": " << it->first<<" -> Completed" << endl;
				count++;
			}
			else {
				cout << "Task " << count << ": " << it->first << " -> Pending" << endl;
				count++;
			}
		}

	}
};

int main()
{

	int y = 0;
	string task;

	int count;
	ToDOList lists;
	while (y != -1)
	{
		cout << "---------------------------------Welcome To The Application---------------------------------------------------------" << endl;
		cout << "-----------------------------------TO Do List------------------------------------------------------------------------" << endl;
		cout << "To add task.Press 1" << endl;
		cout << "To delete a task.Press 2" << endl;
		cout << "To view all your tasks.Press 3" << endl;
		cout << "To mark a Task as completed. Press 4" << endl;
		cout << "To terminate program.Press -1" << endl;
		cin >> y;
		if (y == 1) {
			cout << "How many tasks do you want to add: ";
			cin >> count;
			for (int i = 0; i < count; i++)
			{
				cout << "Enter task number " << i + 1 << ": ";
				cin >> task;
				lists.AddTask(task);
			}
		}
		if (y == 2)
		{
			string t;
			cout << "Enter the task you want to delete" << endl;
			cin >> t;
			lists.DeleteTask(t);
		}
		if (y == 3)
		{
			cout << "Your tasks are: " << endl;
			lists.PrintList(); 
			
		}
		if (y == 4)
		{
			cout << "Enter the Task to mark Complete: ";
			string t;
			cin >> t;
			lists.MarkCompleted(t);
		}
	}
}








#include<iostream>
using namespace std;

class tictactoe
{
private:
	string user1;
	string user2;
	string** game;
	int turns;
	int row;
	int column;
	
public:
	int scorex;
	int scoreo;
	tictactoe(string user1, string user2)
	{
		scoreo = 0;
		scorex = 0;
		row = 0;
		column = 0;
		game = new string * [3];
		for (int i = 0; i < 3; i++)
		{
			game[i] = new string[3];
		}
		for (int i = 0; i < 3; i++)
		{
			for (int j = 0; j < 3; j++)
			{
				game[i][j] = " ";
			}
		}
		this->user1 = user1;
		this->user2 = user2;
		turns = 9;
	}
	/*void board()
	{
		for (int i = 0; i < 15; i++)
		{

			if (i == 5 || i == 10)
			{
				for (int j = 0; j < 25; j++)
				{
					cout << game[i][j] << endl;
					cout << "- ";
				}cout << endl;

			}

			 cout << "            |              |" << endl;

		}

	}*/
	void board() {
		cout << "    0   1   2" << endl;
		for (int i = 0; i < 3; ++i) {
			cout << i << " ";
			for (int j = 0; j < 3; ++j) {
				cout << "  " << game[i][j] << " ";
			}
			cout << endl;
		}
	}


	void gameplay()
	{
		bool draw = true;
		bool win = false;

		string x = "X";
		string o = "O";

		int t = turns;
		while (t > 0 && win == false) {

			if (t % 2 == 0)
			{
				cout << " Player X ->"<<user2<<"'s turn" << endl;

				cout << " enter row to enter your sign: ";
				cin >> row;
				cout << endl;
				cout << " enter column to enter your sign: ";
				cin >> column;
				cout << endl;
				if (row > 2 || column > 2)
				{
					while (row > 2 || column > 2)
					{

						cout << " invalid position" << endl;
						cout << " enter row to enter your sign: ";
						cin >> row;
						cout << endl;
						cout << " enter column to enter your sign: ";
						cin >> column;
						cout << endl;
					}
				}
				if (game[row][column] == "X" || game[row][column] == "O" )
				{
					while (game[row][column] == "X" || game[row][column] == "O")
					{
						cout << " this position is already filled" << endl;
						cout << " enter row to enter your sign: ";
						cin >> row;
						cout << endl;
						cout << " enter column to enter your sign: ";
						cin >> column;
						cout << endl;
					}
				}
				t--;
				game[row][column] = x;
			}
			else {
				cout << " Player O ->"<<user1 <<"'s turn" << endl;

				cout << " enter row to enter your sign: ";
				cin >> row;
				
				cout << " enter column to enter your sign: ";
				cin >> column;
				cout << endl;
				if (row > 2 || column > 2)
				{
					while (row > 2 || column > 2)
					{

						cout << " invalid position" << endl;
						cout << " enter row to enter your sign: ";
						cin >> row;
						
						cout << " enter column to enter your sign: ";
						cin >> column;
						cout << endl;
					}
				}
				if (game[row][column] == "X" || game[row][column] == "O")
				{
					while (game[row][column] == "X" || game[row][column] == "O")
					{
						cout << " this position is already filled" << endl;
						cout << " enter row to enter your sign: ";
						cin >> row;
						cout << endl;
						cout << " enter column to enter your sign: ";
						cin >> column;
						cout << endl;
					}
				}
				t--;
				game[row][column] = o;
			}
			board();
			if ((game[0][0] == "X" && game[0][1] == "X" && game[0][2] == "X") || (game[1][0] == "X" && game[1][1] == "X" && game[1][2] == "X") || (game[2][0] == "X" && game[2][1] == "X" && game[2][2] == "X") || (game[0][0] == "X" && game[1][0] == "X" && game[2][0] == "X") || (game[0][1] == "X" && game[1][1] == "X" && game[2][1] == "X") || (game[0][2] == "X" && game[1][2] == "X" && game[2][2] == "X") || (game[0][0] == "X" && game[1][1] == "X" && game[2][2] == "X") || (game[0][2] == "X" && game[1][1] == "X" && game[2][0] == "X"))
			{
				cout << " Player X wins" << endl;
				win = true;
				draw = false;
				scorex++;

			}
			else if ((game[0][0] == "O" && game[0][1] == "O" && game[0][2] == "O") || (game[1][0] == "O" && game[1][1] == "O" && game[1][2] == "O") || (game[2][0] == "O" && game[2][1] == "O" && game[2][2] == "O") || (game[0][0] == "O" && game[1][0] == "O" && game[2][0] == "O") || (game[0][1] == "O" && game[1][1] == "O" && game[2][1] == "O") || (game[0][2] == "O" && game[1][2] == "O" && game[2][2] == "O") || (game[0][0] == "O" && game[1][1] == "O" && game[2][2] == "O") || (game[0][2] == "O" && game[1][1] == "O" && game[2][0] == "O"))
			{
				cout << " Player O wins" << endl;
				win = true;
				draw = false;
				scoreo++;
			}
		}

		if (draw == true)
		{
			cout << " Game drawn" << endl;

		}

	}

};

int main()
{
	string u1sign;
	string u2sign;
	int x;
	int y;
	cout << "----------------------------------------------Welcom to Tic Tac Toe----------------------------------------------" << endl;
	cout << " press 1 to start game" << endl << endl;
	cin >> y;
	
	while (y != -1)
	{
		
		
		if (y == 1)
		{
			cout << "Player 1 gets O" << endl;
			cout << "Player 2 gets X" << endl;
			cout << "Write your names accordingly choosing your symbol" << endl;
			cout << "Player 1 starts the game always" << endl;
			string user1, user2;
			cout << "Enter name of user 1 " << endl;
			cin >> user1;
			cout << endl;
			cout << "Enter name of user 2 " << endl;
			cin >> user2;
			cout << endl;
			tictactoe obj(user1, user2);
			obj.board();
			obj.gameplay();
			cout << user1 << "'s score is " << obj.scoreo<<endl;
			cout << user2 << "'s score is " << obj.scorex<<endl;

		}
		else { cout << " Wrong Input! Game Ended" << endl; }
		cout << " Press 1 if you want to play again and -1 to terminate program" << endl;
		cin >> y;
	}
	cout << " Game Ended and Program Terminated" << endl;
}


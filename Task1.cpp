#include<iostream>
using namespace std;

class game {
	string person;
	int number;
public:
	game(string person)
	{
		this->person = person;

	}
	int RandomNumber()
	{
		srand((unsigned)time(NULL));//seed
		number = rand()%100;//generates a random number between 0 to 99
		return number;
	}

};
int main() {
	string name;
	int number;
	int guess;
	cout << "------------------------Welcome TO Number Guessing Game--------------------------" << endl;
	cout << "Enter your name to start" << endl;
	cin >> name;
	guess = 0;
	game pers(name);
	number=pers.RandomNumber();
	while (number != guess) {
		cout << "Enter your guess" << endl;
		cin >> guess;
		if (number == guess)
		{
			cout << " Congratulations "<<name<<"! You have guessed the number correctly" << endl;
		}
		 if (number > guess)
		{
			cout <<name<< " Your guess is lesser than the number " << endl;

		}
		 if (number < guess)
		{
			cout <<name<< " Your guess is larger than the number " << endl;
		}
	}
}
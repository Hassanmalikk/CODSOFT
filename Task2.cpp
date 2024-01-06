#include<iostream>
using namespace std;

class Caculator {
	float number1;
	float number2;
	

public:
	Caculator(float n,float x)
	{
		
		number1 = n;
		number2 = x;
	}
	void SetNumber(int g,int y)
	{
		number1 = g;
		number2 = y;

	}
	float addition()
	{
		float ans;
		ans = number1 + number2;
		return ans;
	}
	float subtraction()
	{
		float ans;
		ans = number1 - number2;
		return ans;
	}
	float division()
	{
		float ans;
		if (number2 == 0)
		{
			cout << "Division by 0 is not possible" << endl;
			
		}
		else {
			ans = number1 / number2;
			return ans;
		}
		return -1;
	}
	float multiplication()
	{
		float ans;
		ans = number1 * number2;
		return ans;
	}
};


int main()
{
	cout << "--------------------------------------------------Calculator------------------------------------------------------------" << endl;
	int nc;
	int ans;
	int x;
	int n1, n2;
	cout << "Enter first number: " ;
	cin >> n1;
	cout << "Enter second number: ";
	cin >> n2;
	int y = 0;
	Caculator calc(n1,n2);
	
	while (y != -1)
	{
		if (y == 2)
		{
			cout << "Enter first number: ";
			cin >> n1;
			cout << "Enter second number: ";
			cin >> n2;
			calc.SetNumber(n1, n2);
	}
		cout << "For addition press 1" << endl;
		cout << "For subtraction press 2" << endl;
		cout << "For multiplication press 3" << endl;
		cout << "For division press 4" << endl;
		cin >> x;
		if (x == 1)
		{
			ans = calc.addition();
			cout << "The sum of the two numbers is " << n1 << "+" << n2 << "=" << ans << endl;
		}
		else if (x == 2)
		{
			ans = calc.subtraction();
			cout << "The difference of the two numbers is " << n1 << "-" << n2 << "=" << ans << endl;
		}
		else if (x == 3)
		{
			ans = calc.multiplication();
			cout << "The product of the two numbers is " << n1 << "*" << n2 << "=" << ans << endl;
		}
		else if (x == 4)
		{
			ans = calc.division();
			cout << "Dviding the two numbers gives " << n1 << "/" << n2 << "=" << ans << endl;
		}
		cout << "If you wish to perform more operations press 1 " << endl;
		cout << "IF you wish to change numbers press 2" << endl;
		cout << "To terminate program press -1" << endl;
		cin >> y;
	}
	cout << "Program Terminated" << endl;
}
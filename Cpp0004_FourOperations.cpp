#include <iostream>
#include <cmath>
using namespace std;

int main()
{

	string user;

	cout << "Enter username : ";
	cin >> user;

	cout << "Hello Hello! Mr/Ms " << user << ", welcome to the cpp service. :D" << endl;

	float number1, number2;

	cout << "Enter 1st number : ";
	cin >> number1;

	cout << "Enter 2nd number : ";
	cin >> number2;

	cout << "Addition       : " << (number1 + number2) << endl;
	cout << "Subtraction    : " << abs(number1 - number2) << endl; // used absolute to the minValue-maxValue for is positive
	cout << "Multiplication : " << (number1 * number2) << endl;
	cout << "Division       : " << (number1 / number2) << " or : " << (number2 / number1) << endl;
	// floatlarda mod almamiza izin vermiyor

	int number3, number4;

	cin >> number3 >> number4;
	cout << "Mod/Remainder  : " << (number3 % number4) << " or : " << (number4 % number3) << endl;

	{
		int a = number3, b = number4;
		a += b;
		cout << "Addition       : " << a << endl;
	}
	{
		int a = number3, b = number4;
		a -= b;
		cout << "Subtraction    : " << a << endl;
	}
	{
		int a = number3, b = number4;
		a *= b;
		cout << "Multiplication : " << a << endl;
	}
	{
		int a = number3, b = number4;
		a /= b;
		cout << "Division       : " << a << endl;
	}
}

/*   Calculator
*	Sum
*	Subtraction
*	Multiplication
*	Division
*/

#include <iostream>

using namespace std;

int main()
{
	int num1, num2;
	char op;

	cout << "Write the first number: " << endl;
	cin >> num1;

	cout << "Write the second number: " << endl;
	cin >> num2;

	cout << "## Operations ##\n(+) - Sum\n(-) - Subtraction\n(*) - Multiplication\n(/) - Division\nWrite the operation: " << endl;
	cin >> op;

	switch(op)
	{
	case '+':
		cout << "The sum of the numbers is " << num1 + num2;
		break;
	case '-':
		cout << "The subtraction of the numbers is " << num1 - num2;
		break;
	case '*':
		cout << "The multiplication of the numbers is " << num1*num2;
		break;
	case '/':
		cout << "The division of the numbers is " << (float)num1 / num2;
		break;
	default:
		cout << "Operation don't exist" << endl;
	}
}

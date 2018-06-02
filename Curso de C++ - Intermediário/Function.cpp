#include <iostream>

using namespace std;

bool odd_even(int num)
{
	if (num % 2 == 0)
		return true;
	return false;
}

void msg()
{
	cout << "Function in c++.\n";
	return;
}

void msg(int n)
{
	cout << "Number is " << n << ".\n";
	return;
}

int sum(int n1, int n2)
{
	return n1 + n2;
}

int main()
{
	msg();
	while(1)
	{
		int n;

		cout << "Write a number: ";
		cin >> n;
		msg(n);
		if(odd_even(n))
			cout << "Even number.\n";
		else
			cout << "Odd number.\n";
	}
	return 0;
}

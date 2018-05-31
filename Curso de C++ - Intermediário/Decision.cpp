/* Decision program.
*  C++ course - Udemy
*
*  By Leticia Coelho
*
*/

#include <iostream>

using namespace std;

/* Operator
*	  && -> and
*	  || -> or
*
*/

int condicional_if()
{

	int money = 20;
	bool mon = money > 5;
	if(mon)
	{
		if(money > 10)
		{
			if(money < 50)
				cout << "Go to the cinema, You have between 10 and 50" << endl;
		}
		else
			cout << "Don't go to the cinema" << endl;
	}
	return 0;
}

int main()
{

	int num = 10;

	switch(num)
	{
	case 9:
		cout << "Number nine" << endl;
		break;
	case 10:
		cout << "Number ten" << endl;
		break;
	case 11:
		cout << "Number eleven" << endl;
		break;
	default:
		cout << "We don't have this number"<< endl;
		break;

	}
	return 0;
}




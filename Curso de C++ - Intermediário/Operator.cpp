/* Operator program.
*  C++ course - Udemy
*
*  By Leticia Coelho
*
*/

#include <iostream>

using namespace std;

int main()
{
	int n1, n2, result;
	n1 = 10;
	n2 = 20;
	cout << "Result of sum: "<<  n1+n2;
	cout << "\nResult of division: " << (float)n1/n2;
	cout << "\nRest of division: " << n1%n2;
	cout << "\nRestult of subtraction: " << n1-n2;
	int n = n1;
	n +=1;
	cout << "Result of sum one: "<< n;
	
	return 0;
}

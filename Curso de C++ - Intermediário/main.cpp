#include <iostream>
#include "Math.h"

using namespace std;

int main()
{
	int n;
	cout << "Write a number: ";
	cin >> n;
	cout << "The number is: " << n << endl;
	cout << "It's factorial is: " << factorial(n)<< endl;
	cout << "If is a square, with the side " << n << " it's area is " << square_area(n);
	cout << ".\nIf is a rectangue, with the same side and base " << n << " it's area is " << rectangle_area(n,n);
	
	return 0;
}
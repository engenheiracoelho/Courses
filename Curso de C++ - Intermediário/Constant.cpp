#include <iostream>

using namespace std;

int main()
{
	const double PI = 3.1415;
	cout << "PI constant: " << PI << endl;

	//Using const in pointers.

	const int vet[] = {1, 2, 3};
	// Pointers to const int array. You can modify the pointer, but not the int.
	const int* p1 = &vet[0];
	int const* p2 = &vet[1];

	cout << "P1: " << p1 << endl;
	cout << "P2: " << p2 << endl;

	//Constant pointer to an int array, you can't change the pointer.
	int* const p3 = new int[3];

	*p3 = 1;
	*(p3 + 1) = 2;
	*(p3 + 2) = 3;

	cout << "P3: "<< *p3 << endl;
	cout << "P3: "<< *(p3 + 1) << endl;
	cout << "P3: "<< *(p3 + 2) << endl;
	
	*p3=10;
	cout << "New value: " << *p3 << endl;
	
	//Constant pointer, with constant value. It's impossible to change something.
	const char* const p4 = "Leticia";
	
	cout << "Char pointer : " << p4 << endl;
	
	int vector[]={1,2,3,4};
	int *pt;
	
	cout << "INT vector" << vector << endl;
	cout << "INT vector pointer" << pt << endl;
		
	return 0;
}

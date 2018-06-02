/* Variable program.
*  C++ course - Udemy
*
*  By Leticia Coelho
*
*/

# include<iostream>

using namespace std;

int global_variable = 15;

void msg()
{
	int num = 10;
	cout << num << endl;
	static int static_variable = 1;
	cout << "Global variable: " << global_variable << endl;
	cout << "Static variable: " << static_variable << endl;
	cout << "Local variable: " << num << endl;
	static_variable++;
}

int main()
{
	cout << global_variable << endl;
	msg();
	msg();
	msg();
	int age = 20;
	char name = 'L';
	char surname = 'C';
	char quotation = '\'';
	int sum = name + surname;
	cout << "Age of a person: " << age;
	cout << "\nFirst letter of a person: " << name;
	cout << "\nFirst letter of a person (ASCII): " << (int)name;
	cout << "\nSum letter of a person (ASCII): " << sum;
	return 0;
}

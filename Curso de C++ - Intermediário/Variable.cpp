/* Variable program.
*  C++ course - Udemy
*
*  By Leticia Coelho
*
*/

# include<iostream>

using namespace std;

int main()
{
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

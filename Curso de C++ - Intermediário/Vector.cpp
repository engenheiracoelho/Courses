#include <iostream>
#include <string.h>

using namespace std;

void reverse(char name[])
{
	int size = strlen(name);
	for(int i = size - 1; i >= 0; i--)
		cout << name[i];
	return;
}

void char_alf(char name[])
{
	if(isalpha(name[0]))
		cout << "\nAlphabetic character" << endl;
	else
		cout << "\nNumeric character" << endl;
}

void is_digit(char name[])
{
	if(isdigit(name[0]))
		cout << "\nDigit character" << endl;
	else
		cout << "\nIs not a digit character" << endl;
}

void is_upper(char name[])
{
	if(isupper(name[0]))
		cout << "\nHigh case character" << endl;
	if(islower(name[0]))
		cout << "\nLow case character" << endl;
}

void is_space(char name[])
{
	if(isspace(name[0]))
		cout << "\nWe have a space!" << endl;
	else
		cout << "\nWe don't have a space!" << endl;
}

void _strcmp(char name[], char surname[])
{
	if(strcmp(name, surname) == 0)
		cout << "\nEqual strings!" << endl;
	else
		cout << "\nDifferent strings!" << endl;
}

void lower_char(char c)
{
	cout << "\nOriginal char: " << c << endl;
	char a = tolower(c);
	cout << "\nLower char is " << a << endl;
}

void upper_char(char c)
{
	cout << "\nOriginal char: " << c << endl;
	char a = toupper(c);
	cout << "\nUpper char is " << a << endl;
}

void _strcat()
{

	char name[100];
	char surname[100];

	cout << "Write your name: " << endl;
	cin >> name;
	cout << "Write your surname: " << endl;
	cin >> surname;

	cout << "Your complete name is " << strcat(name, surname) << endl;
}

void _strstr()
{

	char string1[100];
	char string2[100];

	cout << "Write a string: " << endl;
	cin >> string1;
	cout << "Write a string : " << endl;
	cin >> string2;

	if(strstr(string1, string2))
		cout << "It's a substring!" << endl;
	else
		cout << "Isn't a substring" << endl;
	return;
}

int main()
{
	/*int vector[100];
	for(int i = 0; i < 100; i++)
	{
		vector[i] = i + 1;
		cout << vector[i] << endl;
	}
	cout << "Second element:" << vector[1] << endl;
	cout << "Size of vector: " << sizeof(vector) << endl;*/

	char name [] = "Leticia";
	char surname [] = "Coelho";
	char c_high = 'L';
	char c_low = 'l';

	reverse(name);
	char_alf(name);
	is_digit(name);
	is_upper(name);
	is_space(name);
	_strcmp(name, surname);
	lower_char(c_high);
	upper_char(c_low);
	_strcat();
	_strstr();
	return 0;

}

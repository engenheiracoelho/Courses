/*
* & - use the address
* * - set the value for this address
*/

#include <iostream>
#include <string.h>

using namespace std;

void foo(int* n)
{
	*n = 50;
}

void fii(int vet[])
{
	vet[0] = 100;
}

int _strlen(char * str){
	int size = 0;
	
	while(*str != '\0'){
		str++;
		size++;
	}
	return size;
}
char * _strcat(char * dest, char* source)
{
	char * result;
	int size_dest = _strlen(dest);
	int size_source = _strlen(source);
	
	result = new char[size_dest+size_source];
	char *p = result;
	
	while(*dest != '\0'){
		*p = *dest;
		p++;
		dest++;
	}
	while(*source != '\0'){
		*p = *source;
		p++;
		source++;
	}
	*p = '\0';
	
	return result;

}

int main ()
{
	int var = 10;
	int * pvar;

	pvar = &var; //pvar has the var's address
	cout << *pvar << endl;
	*pvar = 20;
	cout << var << endl;

	foo(&var);
	cout << var << endl;

	int * vet = new int[10];
	int aux[3];
	aux[0] = 10;
	aux[1] = 20;
	aux[2] = 30;

	*(vet + 0) = 10;
	*(vet + 1) = 20;
	*(vet + 2) = 30;

	cout << "Vector: " << *(vet + 0) << endl;
	cout << "Vector: " << *(vet + 1) << endl;
	cout << "Vector: " << *(vet + 2) << endl;

	for(int i = 0; i < sizeof(aux) / sizeof(int); i++)
		cout << "Aux: " << *(aux + i) << endl;

	fii(aux);

	cout << "Fii function: " << aux[0] << endl;

	delete[] vet; // Return memory to stack
	vet = NULL;

	int array[] = {1, 2, 3, 4, 5};
	int* parray = &array[0];
	int i = 0;

	while(i < 5)
	{
		cout << *parray << endl;
		parray++;
		i++;
	}

	delete[] parray;
	parray = NULL;

	char name_[100];
	cout << "Write a name: ";
	cin >> name_;

	int size = strlen(name_);
	char *pend = &name_[size]; //the final of string
	char *pinit = &name_[0]; //the init of string

	while(true)
	{
		cout << *pend;
		if (pend == pinit)
			break;
		pend --;
	}

	//

	char* name = new char[100];
	char* surname = new char[100];
	char* result;

	cout << "\nWrite the NAME: ";
	cin >> name;
	cout << "Write the SURNAME:  ";
	cin >> surname;

	result = _strcat(name, surname);
    
    cout << "Size of the name is " << _strlen(name) << endl;
    
    cout << "The name is " << _strcat(name,surname)<<endl;
	return 0;
}

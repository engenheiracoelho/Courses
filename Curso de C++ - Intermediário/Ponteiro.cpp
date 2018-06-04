/*
* & - paga o endereço
* * - passa o valor para o endereço
*/

#include <iostream>

using namespace std;

void foo(int* n)
{
	*n = 50;
}

void fii(int vet[])
{
 	vet[0]=100;
}

int main ()
{
	int var = 10;
	int * pvar;

	pvar = &var; //address
	cout << *pvar << endl;
	*pvar = 20;
	cout << var << endl;

	foo(&var);
	cout << var << endl;

	int * vet = new int[10];
	int aux[10];
	aux[0] = 10;
	aux[1] = 20;
	aux[2] = 30;

	*(vet + 0) = 10;
	*(vet + 1) = 20;
	*(vet + 2) = 30;

	cout << "Vector: " << *(vet + 0) << endl;
	cout << "Vector: " << *(vet + 1) << endl;
	cout << "Vector: " << *(vet + 2) << endl;

	cout << "Aux: " << *(aux + 0) << endl;
	cout << "Aux: " << *(aux + 1) << endl;
	cout << "Aux: " << *(aux + 2) << endl;

	fii(aux);
	
	cout << "Fii function: " << aux[0] << endl;
	return 0;
}

#include <iostream>
#include <string.h>

using namespace std;

typedef struct person
{
	char name[100];
	int age;
	int year;
	int cpf[20];
} people;

int main(int argc, char *argv[])
{
	/*char person[3][100] = {"Marcelo","Leticia","Maria"};
	int age[3] = {26,30,20};

	cout << "Name: " << person[0] << endl;
	cout << "Age: " << age[0] << endl;
	*/

	
	/*people p[2];

	strcpy(p[0].name, "Leticia");
	p[0].age = 24;

	strcpy(p[1].name, "Marcelo");
	p[1].age = 34;
	
	strcpy(p[2].name, "Maria");
	p[2].age = 16;

	for(int i = 0; i < 3; i++)
	{
		cout << "Name: " << p[i].name << endl;
		cout << "Idade: " << p[i].age << endl;

	} */
	
	people p[100];
	people* pp;
	
	pp = &p[0];
	
	p[0].age = 10;
	
	cout << "Age: " << p->age << endl;
	
	return 0;
}

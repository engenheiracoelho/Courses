#include <iostream>
#include <string.h>

using namespace std;

class People
{
public:
	char Name[100];
	char CPF[20];
	int Age;
};

int getAge(People p[], char name[])
{
	int tam = sizeof(p);

	for(int i = 0; i < tam; i++)
	{
		if(strcmp(name, p[i].Name) == 0)
			return p[i].Age;
	}
	return -1;
}

int main(int argc, char *argv[])
{
	People p;
	People p1;

	strcpy(p1.Name, "Leticia");
	strcpy(p1.CPF, "00999899");
	p1.Age = 23;

	People p2 = {"Marcelo", "00999899", 34};

	People p3[3] =
	{
		{"Ana", "00999899", 34},
		{"Paula", "00999899", 25},
		{"Marcelo", "00999899", 34},
	};

	cout << "Name: " << p1.Name << endl;
	cout << "CPF: " << p1.CPF << endl;
	cout << "Age: " << p1.Age << endl;

	cout << "Name: " << p2.Name << endl;
	cout << "CPF: " << p2.CPF << endl;
	cout << "Age: " << p2.Age << endl;

	cout << "Name: " << p3[0].Name << endl;
	cout << "CPF: " << p3[0].CPF << endl;
	cout << "Age: " << p3[0].Age << endl;

	cout << "Name: " << p3[1].Name << endl;
	cout << "CPF: " << p3[1].CPF << endl;
	cout << "Age: " << p3[1].Age << endl;

	cout << "What's the name? " << endl;
	cin >> p.Name;
	cout << "What's the CPF? " << endl;
	cin >> p.CPF;
	cout << "What's the age? " << endl;
	cin >> p.Age;

	cout << "Name: " << p.Name << endl;
	cout << "CPF: " << p.CPF << endl;
	cout << "Age: " << p.Age << endl;

	int age = getAge(p3,"Marcelo");
	if(age != -1){
		cout << "Age of people: " << age << endl;
	}else
	{
		cout << "We don't have this people!" << endl;
	}
	return 0;
}

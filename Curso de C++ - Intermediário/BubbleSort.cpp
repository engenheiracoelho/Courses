#include <iostream>
#include <string.h>
#define MAX 10

using namespace std;

class Car
{
public:
	char name[100];
	char color[20];
	char number[20];
	double price;
};

int main(int argc, char *argv[])
{
	Car c[MAX];
	int i = 0;


	while(1)
	{
		char resp;
		cout << "Car's name: " ;
		cin >> c[i].name;
		cout << "Car's color: ";
		cin >> c[i].color;
		cout << "Car's number: ";
		cin >> c[i].number;
		cout << "Car's price: ";
		cin >> c[i].price;
		cout << "Do you want to continue? Write <Y> to yes or <N> to not: " << endl;
		cin >> resp;

		if(resp != 'Y')
			break;
		cout << endl;
		i++;
	}
	cout << endl;
	cout << "All cars" << endl;
	for(int j=0;j<=i;j++){
		cout << "Car's name: " << c[j].name << endl;
		cout << "Car's price: " << c[j].price << endl; 
	}
	cout << "Ordened car by name";
	return 0;
}

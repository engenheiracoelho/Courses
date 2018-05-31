#include <iostream>

using namespace std;

/*int Loop_while()
{
	int n = 1;
	int i = 0;
	while(n <= 100)
	{
		if (n % 2 != 0) //Number is odd
		{
			n++;
			continue;
		}
		if (n > 50)
			break;
		n++;
	}
	return 0;
}*/

int main()
{
/*	int i, j;

	for(i = 1; j = 1; i <= 100; i++; j++)
	{
		cout << "i:" << i << endl;
		cout << "j:" << j << endl;
	}
*/
	//Fatorial

	int num, fat=1;
	cout << "Write a number: ";
	cin >> num;

	for(int i=1; i<num; i++)
	{
		fat= fat *(i+1);
		
	}
	
	cout << "Fatorial:" << fat;
	return 0;

}

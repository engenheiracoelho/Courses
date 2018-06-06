#include <iostream>
using namespace std;

/* int main(int argc, char *argv[])
* argc is an argument, the first is the program's name
* argv[] is an array of pointers in this argument string
*
*/

int main(int argc, char *argv[])
{

	/*int n1 = 10, n2 = 20, n3 = 30;
	int* parray[3] = {&n1, &n2, &n3};

	cout << *parray[0] << endl;
	cout << *parray[1] << endl;
	cout << *parray[2] << endl;*/

	cout << "Number of argments: " << argc << endl;
	cout << "Argments: " << endl;

	for(int i = 0; i < argc; i++)
	{
		cout << argv[i] << endl;
	}

	return 0;

}

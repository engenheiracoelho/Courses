#include <iostream>
using namespace std;

struct People
{
private :
	int age;
public:
	People(int age);
	void setAge(int age);
	int getAge();

};

People::People(int age)
{
	this->age = age;
}
void People::setAge(int age)
{
	this->age = age;
	return;

}
int People::getAge()
{
	return this->age;
}

int main(int argc, char *argv[])
{

	People p(20);
	cout << p.getAge() << endl;
	return 0;
}

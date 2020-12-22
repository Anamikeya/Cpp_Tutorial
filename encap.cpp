//using get and set to access the private content 

#include<iostream>
using namespace std;
class employe
{
	int salary;
public:
	//setter usingg this you can use the private method in the main loop
	void setSalary(int s)
	{
		salary = s;
	}
	//this prints the main content
	int getSalary()
	{
		return salary;
	}
};
int main(int argc, achar const *argv[])
{
	employe obj;
	obj.setSalary(50000);
	cout << obj.getSalary()<< endl;
	return 0;
}
#include<iostream>
using namespace std;

class car
{
public: 

		string brand;
		string model;
		int year;
};

int main()
{
	car obj1;
	obj1.brand = "BMW";
	obj1.model = "X5";
	obj1.year = 2012;

	car obj2;
	obj2.brand = "AUDI";
	obj2.model = "VXI";
	obj2.year = 1999;

	cout << obj1.brand<< "\t" << obj1.model<<"\t" << obj1.year << endl;
	cout << obj2.brand <<"\t"<< obj2.model<< "\t" << obj2.year<<endl;

	return 0;

}
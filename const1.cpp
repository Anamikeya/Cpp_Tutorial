#include<iostream>
using namespace std;

class car
{

public:
	void cars(int number,string model,string brand)
	{
		cout << number <<"\t"<<model<<"\t"<<brand;

	}
	int condition(string cond)
	{

		cout <<"\t"<< cond << endl;

	}
};

int main()
{
	car obj[100];
	int n;
	int num[100];
	string model[100],brand[100],cond[100];
	cout << "Enter the numbers of records\n";
	cin >> n;
	for(int i = 0 ; i < n ; i++)
	{
		cout << "Enter the number, model and brand of "<<i<<" car\n";
		cin >> num[i]>>model[i]>>brand[i];
		cout << "Enter teh condition\n";
		cin >> cond[i];
		

	}

	cout<<"number\tmodel\tbrand\tcondition\n";
	for(int i = 0 ; i < n; i++)
	{
		obj[i].cars(num[i],model[i],brand[i]);

		obj[i].condition(cond[i]);
		

	}
	return 0;
}
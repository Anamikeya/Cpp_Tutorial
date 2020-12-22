#include<iostream>
using namespace std;
class veichle
{
public:
	string brand = "Ford";
	void honk()
	{
		cout << "poon...Pooon!!\n";

	}

};
class car : public veichle
{
public:
	string model = "Mustang";
};
int main()
{
	car obj;
	obj.honk();
	return 0;
}
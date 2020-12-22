#include<iostream>
using namespace std;
class veichle
{
	public:
	void horn()
	{
		cout << "peee....peeee..\n";
	}	
};
class car 
{
public:
	void maxspeed()
	{
		cout << "max speed is 180\n";
	}
};
class bike : public car,public veichle
{

};
int main()
{
	bike obj;
	obj.horn();
	obj.maxspeed();
	
	return 0;
}
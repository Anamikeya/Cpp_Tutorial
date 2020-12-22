//you cant access the private keyword outside the class
//if you dont declare "public:" in class any method or variable is by default private
#include<iostream>
using namespace std;
class car
{
public:
	int x;
private:
	int y;

};
int main()
{
	car obj;
	obj.x = 20;
	obj.y = 33;
	cout << obj.x << "\t"<<obj.y<< endl;
	return 0;
}
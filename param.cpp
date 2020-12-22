#include<iostream>
using namespace std;

class car
{
public:
	int speed(int max);
};
int car :: speed(int max)
{
	return max;
}
int main()
{
	car obj1;
	cout << obj1.speed(180)<<endl;
	return 0;
}
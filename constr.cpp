#include<iostream>
using namespace std;

class constr
{
public:
	float x=10.0f,y=20.0f;
	constr()
	{
		cout<<"Constructor created\n";
	}

	~constr()
	{
		cout <<"destroyed\n";
	}
	void print()
	{
		cout << x <<","<<y << endl;
	}
};
void function()
{
	constr e;
	e.print();

}
int main(int argc, char const *argv[])
{
	function();

	return 0;
}
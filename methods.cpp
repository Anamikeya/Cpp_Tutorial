#include<iostream>
using namespace std;

class car
{
	public:
		void method()
		{
			cout << "Lets Drive\n";
		}
		void method2();
		
};
//another way to define a class
void car :: method2()
{
	cout << "Dont Forget the brakes\n";

}
int main()
{
	car obj;
	obj.method();
	obj.method2();
	return 0;
}
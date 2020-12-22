#include<iostream>
using namespace std;
class myclass
{
    public:
        int num;
        string str;
        
};
int main()
{
    myclass myobj;
    myobj.num = 15;
    myobj.str =  "Mystring";
    cout << myobj.num << "\t" << myobj.str << endl;
    
    return 0;
}
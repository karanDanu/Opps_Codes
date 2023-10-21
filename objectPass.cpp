#include<iostream>
using namespace std;
class karan
{
    public:
    int a;
    void sub(karan obj)
    {
        a=a-a;
    }
};
int main()
{
    karan obj1;
    karan obj2;
    obj1.a=45;
    obj2.a=100;

    cout<<"INITIAL VALUE \n";
    cout<<"value from object 1 :"<<obj1.a<<"\n value from object 2 :"<<obj2.a<<"\n\n";

    obj1.sub(obj1);

    cout<<"final value \n";
    cout<<"value from object 1 :"<<obj1.a<<"\n value from object 2 :"<<obj2.a<<"\n";
    return 0;
}
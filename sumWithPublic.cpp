#include<iostream>
using namespace std;
class sum
{
    public:
    int a,b;
    void get()
    {
        cout<<"enter the first number :"<<endl;
        cin>>a;
        cout<<"enter the second number :";
        cin>>b;
    }
    int add()
    {
        return a+b;
    }
};

int main()
{
    sum obj;
    obj.get();
    obj.add();
    cout<<"the sum of two numbers is :"<<obj.add();
    return 0;
}
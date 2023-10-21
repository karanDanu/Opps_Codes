#include<iostream>
using namespace std;
class sum
{
    private:
    int a=10,b=60;
    public:
    int add()
    {
        return a+b;
    }
};
int main()
{
    sum obj;
    obj.add();
    cout<<"the sum of numbers is :"<<obj.add();
    return 0;
}
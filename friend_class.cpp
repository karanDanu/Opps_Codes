#include<iostream>
using namespace std;
class A
{
    private:
    int a=10,b=50;
    friend class B;
};
class B
{
    public:
    void sum(A &x)
    {
        cout<<"addition is "<<x.a+x.b<<endl;
    }
};
int main()
{
    A x;
    B z;
    z.sum(x);
    return 0;
}
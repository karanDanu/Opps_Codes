#include<iostream>
using namespace std;
class karan
{
    public:
    int x=20,y=45;
    friend float sum();
};
float sum(karan &obj)
{
    return obj.x+obj.y;
}

int main()
{
    karan obj;
    cout<<"sum is "<<sum(obj)<<endl;
    return 0;
}
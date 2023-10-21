#include<iostream>
using namespace std;
class circle
{
    public:
    double get()
    {
        cout<<"enter the radius: ";
        cin>>radius;
        return radius;
    }
    double radius;
    double compute_area()
    {
        return 3.14*radius*radius;
    }
};

int main()
{
    circle obj;
    obj.radius=obj.get();
    cout<<"Radius of a circle is: "<<obj.radius<<endl;
    cout<<"Area of circle is: "<<obj.compute_area();
    return 0;
}
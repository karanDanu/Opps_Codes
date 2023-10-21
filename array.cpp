#include<iostream>
using namespace std;
int main()
{
    int a[5];
    cout<<"enter 5 numbers"<<endl;
    for (int i=0;i<5;i++)
    {
        cin>>a[i];
    }
    cout<<"the array is : ";
    for (int n=0;n<5;n++)
    {
        cout<<a[n];
    }
    return 0;
}
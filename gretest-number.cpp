#include<iostream>
using namespace std;

int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    if(a>b && a>c)
    {
        cout<<"a is bigger than both="<<a<<endl;
    }
    else if(b>a && b>c)
    {
        cout<<"b is greater then both="<<b<<endl;
    }
    else
    {
        cout<<"c is bigger="<<c<<endl;
    }
    return 0;
}
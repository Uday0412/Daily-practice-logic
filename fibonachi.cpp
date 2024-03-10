#include<iostream>
using namespace std;

int main()
{
    int n,c;
     int a=0,b=1;
    cin>>n;
    if(n==0)
    return a;
    else
    {
        for(int i=2;i<=n;i++)
        {
        c=a+b;
        a=b;
        b=c;
        }
    }
    cout<<"ans="<<c;
    return 0;
}
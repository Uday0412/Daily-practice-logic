#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int sum=0;
    int orignaln=0;
    while(n>0)
    {
        int lastdigit=n%10;
        sum+=lastdigit*lastdigit*lastdigit;
        n=n/10;
    }
    if(sum==orignaln)
    {
        cout<<"armstrong";
    }
    else
    {
        cout<<"not";
    }
    return 0;
}
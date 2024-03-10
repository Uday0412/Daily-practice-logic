#include<iostream>
using namespace std;

int main()
{
    char ch;
    cin>>ch;
    if(ch=='a','e','i','o','u' || ch=='A','E','I','O','U')
    {
        cout<<"vowel="<<ch;
    }
    else
    {
        cout<<"consonent";
    }
    return 0;
}
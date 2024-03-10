#include<iostream>
using namespace std;

int main()
{
    char ch;
    cin>>ch;
    for(int i=65;i<=90;i++)
    {
        if(ch==i)
        {
            cout<<"alphabet";
            break;
        }
        else{
            cout<<"not";
            break;
        }
    }
    return 0;
}
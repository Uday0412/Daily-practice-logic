#include<iostream>
#include<string>
using namespace std;

int main()
{
    string str ="uday kushwaha";
    int count=0;
    for(int i=0;str[i]!='\0';i++)
    {
        count++;
    }
    cout<<"count="<<count<<endl;
    return 0;
}
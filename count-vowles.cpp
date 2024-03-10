#include<iostream>
#include<cstring>
using namespace std;

int main()
{
    string str;
    cout<<"enter the string";
    cin>>str;
    int count=0;
    for(int i=0;str[i]!='\0';i++)
    {
        if(str[i]=='a','e','i','o','u','A','E','I','O','U')
        {
            count++;
        }
        else{
            break;
        }
    }
    cout<<"count="<<count<<endl;
    return 0;
}
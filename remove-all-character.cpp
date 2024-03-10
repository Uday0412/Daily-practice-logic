#include<iostream>
#include<string>
using namespace std;

int main()
{
    char str[10]="uday";
    
    for(int i=0;str[i]!='\0';i++)
    {
        if(str[i]=='a'||str[i]=='A'&&str[i]=='z'||str[i]=='Z')
        {
            cout << str[i];
        }
    }
    return 0;
}
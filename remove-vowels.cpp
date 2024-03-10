#include <iostream>
#include<string>
using namespace std;

int main()
{
    string str;
    cout << "Enter an string  : ";
    cin >> str;
    int i;
    for(i=0;str[i]!='\0';i++)
    {
        if(str[i]!='a'||str[i]!='e'||str[i]!='i'||str[i]!='o'||str[i]!='u'||str[i]!='A'||str[i]!='E'||str[i]!='I'||str[i]!='O'||str[i]!='U')
        {
            cout << "";
            
        }
        else
        {
            cout << str[i];
        }
    }
    return 0;
}
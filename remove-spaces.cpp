#include <iostream>
#include<string>
using namespace std;

int main()
{
    string str;
    cin>>str;
    int i;
    for(i=0;str[i]!='\0';i++)
    {
      if(str[i]==" ")
      {
        cout<<"";
      }
      else
      {
        cout<<str[i];
      }
    }
    return 0;
}
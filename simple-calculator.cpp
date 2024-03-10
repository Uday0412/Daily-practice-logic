#include<iostream>
using namespace std;

int main()
{
    int n1,n2;
    cout<<"enetr the numebr";
    cin>>n1>>n2;

    char op;
    cin>>op;

    switch (op)
    {
        case '+':
        cout<<"sum="<<n1+n2;
        break;

        case '*':
        cout<<"mul="<<n1*n2;
        break;

        case '%':
        cout<<"divide="<<n1%n2;
        break;

        case '-':
        cout<<"subtract="<<n1-n2;
        break;

        default:
        cout<<"enetr wrong op";
        break;
    }
    return 0;
}
#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cout<<"Enter a number 1: ";
    cin>>a;
    cout<<"Enter a number 2: ";
    cin>>b;
    if(a>b)
    cout<<a<<"is larger than "<<b;
    else if (a<b)
    cout<<b<<" is larger than "<<a;
    else
    cout<<"both are equal"<<a;
    return 0;
}
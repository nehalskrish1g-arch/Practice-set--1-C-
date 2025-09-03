#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"Enter number 1: ";
    cin>>a;
    cout<<"Enter number 2: ";
    cin>>b;
    cout<<"Enter number 3:" ;
    cin>>c;
    if((a>b) && (a>c))
    cout<<a<<" is larger ";
    else if((b>a)&&(b>c))
    cout<<b<<" Is larger ";
    else
    cout<<c<<"Is larger ";
    return 0;

}
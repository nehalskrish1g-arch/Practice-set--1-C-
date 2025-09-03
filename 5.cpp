#include<iostream>
using namespace std;
int main()
{
    int num;
    cout<<"Enter  a number:";
    cin>>num;
    if(num>0)
    cout<<num<<" Is positive";
     else if(num==0)
    cout<<num<<" Is zero ";
     else if(num<0)
    cout<<num<<" is neagtive ";
    return 0;
}
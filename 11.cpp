#include<iostream>
using namespace std;
int main()
{
    float marks;
    cout<<"Enter the marks of the student: ";
    cin>>marks;
    if((marks>=90))
    cout<<"A";
    else if((marks>=80)&& (marks<=89))
    cout<<"B";
    else if((marks>=70)&& (marks<=79))
    cout<<"C";
    else if ((marks>=60)&&(marks<=69))
    cout<<"D";
    else if ((marks<=60))
    cout<<"F";
    return 0;
}

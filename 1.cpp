#include<iostream>
using namespace std;
int main(){
    char name[50];
    int age;
    cout<<"Enter your name: ";
    cin>>name;
    cout<<"Enter your age: ";
    cin>>age;
    cout<<"Hello "<<name<<", you are "<<age<<" years old.";
    return 0;
}
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int a,b,c;
    float root1,root2;
    float dist;
    cout<<"Enter three numbers: "<<endl;
    cin>>a>>b>>c;
    dist=(b*b)-(4*a*c);
    if(dist>0)
    {
    root1=(-b+sqrt(dist))/(2*a);
    root2=(-b-sqrt(dist))/(2*a);
    cout<<"The roots are real and equal and are"<<root1<<" and "<<root2<<endl;
    }
    else if (dist==0)
    {
        root1=(-b+sqrt(dist))/(2*a);
        cout<<"The roots are real and equal,"<<root1<<" and "<<root2<<endl;
    }
    else
    {
        cout<<"The roots are imaginary";
    }
    return 0;


}


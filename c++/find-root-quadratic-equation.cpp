#include<bits/stdc++.h>
using namespace std;

int main()
{
    double a, b, c, d, x1, x2;
    cout<<"Enter coefficients a,b,c: ";
    cin>>a>>b>>c;

    d = (b*b)-(4*a*c);
    cout<<"d is: "<<d<<endl;

    if(d>0)
    {
        x1 = (- b + sqrt(d))/(2*a);
        x2 = (- b - sqrt(d))/(2*a);
        cout<<"Roots are real and different"<<endl;
        cout<<"Root 1= "<<x1<<endl;
        cout<<"Root 2= "<<x2<<endl;
    }
    else if(d==0)
    {
        x1 = - b /(2*a);
        cout<<"Roots are real and the same"<<endl;
        cout<<"Root = "<<x1<<endl;
    }
    else
    {
        x1 = - b /(2*a);
        x2 = sqrt(-d)/(2*a);
        cout<<"Roots are complex and different"<<endl;
        cout<<"Root 1= "<<x1<<"+"<<x2<<"i"<<endl;
        cout<<"Root 2= "<<x1<<"-"<<x2<<"i"<<endl;
    }




    return 0;
}

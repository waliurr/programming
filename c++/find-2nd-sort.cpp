#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a[5]= {1,2,5,3,6};
    int firstMax = 0;
    int secondMax = 0;

    firstMax = secondMax = a[0];

    for(int i=0; i<5; i++)
    {
        cout<<"item "<<i<<": "<<a[i]<<endl;
        if(firstMax<a[i])
        {
            secondMax=firstMax;
            firstMax=a[i];
            cout<<"1st Max: "<<firstMax<<endl;
            cout<<"2nd Max: "<<secondMax<<endl;
        }

        else if(a[i]>secondMax && a[i]<firstMax)
        {
            secondMax=a[i];
            cout<<"1st Max: "<<firstMax<<endl;
            cout<<"2nd Max: "<<secondMax<<endl;
        }

        cout<<"==============="<<endl;
    }

    cout<<endl<<"After calculation"<<endl;
    cout<<"1st Max: "<<firstMax<<endl;
    cout<<"2nd Max: "<<secondMax<<endl;

    cout<<endl;
    return 0;
}

#include<bits/stdc++.h>
using namespace std;

int main()
{

    int a[5]= {31,12,51,23,47};

    cout<<"Data: ";
    for(int i=0; i<5; i++)
    {

        cout<<a[i]<<" ";

    }
    cout<<endl<<"=============="<<endl;

    int n;
    cout<<"Enter search number: ";
    cin>>n;

    int findN=-1;
    for(int i=0; i<5; i++)
    {
        if(n == a[i])
        {
            findN=i;
        }
    }

    if(findN-1)
    {
        cout<<"Data not found!";
    }
    else
    {
        cout<<"Data found at index: "<<findN;
    }
    return 0;
}

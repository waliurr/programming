#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout<<"How many: ";
    cin>>n;
    int a[n];

    //open file
    freopen("input.txt", "r", stdin);

    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }

    cout<<"Array data : ";
    for(int i=0; i<n; i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;

    int temp;
    for(int i=0; i<n-1; i++)
    {
        for(int j=0; j<n-1-i; j++)
        {
            if(a[j]>a[j+1])
            {
                temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
    }

    cout<<"Sorted data: ";
    for(int i=0; i<n; i++)
    {
        cout<<a[i]<<" ";
    }

    cout<<endl;
    return 0;
}

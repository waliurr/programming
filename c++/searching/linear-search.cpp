#include<bits/stdc++.h>
using namespace std;

int main()
{
    int arr[] = {10,30,50,20,40,80,70,60,5,2,7,24,16,34,46,67,89,12};

    cout<<"size of array: "<<sizeof(arr)<<endl;
    cout<<"size of array[0]: "<<sizeof(arr[0])<<endl;
    int n = sizeof(arr) / sizeof(arr[0]);
    cout<<"Number of elements: "<<n<<endl;

    cout<<"Array elements is: ";
    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    int x;
    cout<<"Enter search number: ";
    cin>>x;

    int flag = -1;
    for(int i=0; i<n; i++)
    {
        if(arr[i] == x)
        {
            flag= i;
        }
    }

    if(flag==-1)
    {
        cout<<"Number is not present at the array!"<<endl;
    }
    else
    {
        cout<<x<<" number is present at the index "<<flag<<endl;
    }

    return 0;
}

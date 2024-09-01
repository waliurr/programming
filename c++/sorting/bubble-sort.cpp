//Bubble sort
#include<bits/stdc++.h>
using namespace std;

//function to execute bubble sort algorithm
void bubbleSort(int arr[], int n){
    for(int i=0; i<n-1; i++)
    {
        for(int j=0; j<n-i-1; j++)
        {
            if(arr[j+1]<arr[j]){
                swap(arr[j+1],arr[j]);
            }
        }
    }
}

//function to print array
void printArray(int arr[], int n){
    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
}

//main function
int main()
{
    int arr[]= {6,2,7,5,1,0,8};
    int len = sizeof(arr)/sizeof(arr[0]);

    cout<<"Given array : ";
    printArray(arr,len);

    bubbleSort(arr,len);

    cout<<endl<<"Sorted array: ";
    printArray(arr,len);

    cout<<endl;
    return 0;
}

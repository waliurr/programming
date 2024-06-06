#include<bits/stdc++.h>
using namespace std;

int main(){

    int n;
    freopen("input.txt","r",stdin);
    cin>>n;
    int a[n];
    int sn=0,ln=0;

    for(int i=0;i<n;i++){
        cin>>a[i];
        if(i==0){
            sn=a[i];
            ln=a[i];
        }
        if(ln<a[i]){
            ln=a[i];
        }
        if(sn>a[i]){
            sn=a[i];
        }
    }
    cout<<"Your data: ";
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }


    cout<<endl<<"Finding Smallest data: "<<sn;
    cout<<endl<<"Finding biggest data: "<<ln;

    cout<<endl;
    return 0;
}

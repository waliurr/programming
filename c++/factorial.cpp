#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, fact=1;
    cout<<"Enter a number: ";
    cin>>n;

    for(int i=1;i<=n;i++){
        fact *= i;
    }

    cout<<n<<"! = "<<fact;
    cout<<endl;
    return 0;
}

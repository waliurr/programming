#include<stdio.h>

int main(){

    int n=5,i;
    int arr[n];
    float sum=0,avg=0;

    printf("Enter the %d elements of an array: ", n);
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    for(i=0;i<n;i++){
        sum+=arr[i];
    }
    avg=sum/n;
    printf("Average is %f",avg);

    printf("\n");
    return 0;
}

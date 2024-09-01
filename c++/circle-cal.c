#include<stdio.h>

int main(){
    float r, area=0, circumference=0;
    printf("Enter radius: ");
    scanf("%f",&r);

    area = 3.1416 * r * r;
    printf("Area = %0.2f\n", area);

    circumference=2*3.1416*r;
    printf("Circumference = %0.2f\n", circumference);

    return 0;
}

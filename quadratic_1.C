#include<stdio.h>
void main() {
    int a,b,c,D;
    printf("Enter value of a,b,c : ");
    scanf("%d %d %d",a,b,c);
    D=b*b-4*a*c;
    if(D==0) {
        printf("Given equation's roots are real and equal");
    }
    else if(D>0) {
        printf("Given roots are real");
    }
    else {
        printf("Given roots are imaginary");
    }
}
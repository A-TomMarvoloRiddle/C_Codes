#include<stdio.h>
#include<math.h>
void main() {
    int a,b,c,D;
    float root1, root2;
    printf ("enter value of a,b,c: "); 
    scanf ("%d %d %d",&a,&b,&c);
    printf("a=%d\n",a); 
    printf("b=%d\n",b); 
    printf("c=%d\n",c); 
    D = b*b-4*a*c;
    root1=((-b)+sqrt(D))/(2*a); 
    root2=((-b)-sqrt(D))/(2*a);
    if (D==0) {
        printf("Given equation's roots are real and equal\n"); 
        printf("Root of quadratic equation are %f & %f",root1,root2);
    }
    else if (D>0) {
        printf("Given roots are real\n");
        printf ("Root of quadratic equation are: %f & %f",root1, root2);
    }
    else {
        printf("Given root are imaginary");
    }
}

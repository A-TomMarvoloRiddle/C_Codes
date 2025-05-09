#include<stdio.h>
#include<math.h>
void main() {
    int a,b,c,d;
    float root1, root2,rp,ip;
    printf("Enter coefficients a, b and c: ");
    scanf("%d %d %d",&a,&b,&c);
    printf("a=%d\n",a); 
    printf("b=%d\n",b); 
    printf("c=%d\n",c); 
    d=b*b-4*a*c;
    if (d > 0) {
        printf("Given equation's roots are real\n");
        root1=((-b)+sqrt(d))/(2*a); 
        root2=((-b)-sqrt(d))/(2*a);
        printf("root1 = %0.2f\nroot2 = %0.2f", root1, root2);
    }
    else if (d==0) {
        printf("Given equation's roots are real and equal\n"); 
        root1 = root2 = -b/(2*a);
        printf("root1 = root2 = %0.2f;", root1);
    } 
    else {
        printf("Given equation's roots are imaginary\n");
        rp=-b/(2*a);
        ip=sqrt(-d)/(2*a);
        printf("root1 = %0.2f + %0.2fi\nroot2 = %0.2f - %0.2fi",rp,ip,rp,ip);
    }
} 

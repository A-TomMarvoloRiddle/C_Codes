#include <stdio.h>
int main() {
    int i=1,n,fac=1;
    printf("Enter the number(n): ");
    scanf("%d",&n);
    while (i<=n) {
        fac*=i;
        i++;
    }
    printf("Factorial of %d is %d\n",n,fac);
    return 0;
}

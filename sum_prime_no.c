#include <stdio.h>
int main() {
    int i,n=2,num,c=0,sum=0,flag;
    printf("Enter the number: ");
    scanf("%d",&num);
    while(c<num) {
        flag=0;
        for(i=2; i <= n/2 ; i++) {
            if (n%i==0) {
                flag=1;
                break;
            }
        }
        if(flag==0) {
            sum+=n;
            c+=1;
        }
    n++;
    }
    printf("Sum of first %d prime numbers = %d",num,sum);
    return 0;
}

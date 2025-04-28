#include<stdio.h>

int is_prime(int n);

int main() {
    int n, i, x[50];
    scanf("%d", &n);
    for(i=0;i<n;i++) {
        scanf("%d", &x[i]);
    }
    for(i=0;i<n;i++){
        if(is_prime(x[i]))
            printf("%d ",x[i]);
    }
    return 0;
}

int is_prime(int n) {
    int i;
    for(i=2;i<=n/2;i++) {
        if(n%i==0)
            return 0;
    }
    return 1;
}

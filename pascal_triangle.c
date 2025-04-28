#include <stdio.h>

int fact(int n){
    int fact;
    for(fact=1; n>1; n--)
        fact *= n;
    return fact;
}

int combi(int n, int r){
    return fact(n)/(fact(n-r) * fact(r));
}

int main(){
    int n,i,j;
    printf("Enter the number of rows: ");
    scanf("%d",&n);
    for(i = 0; i < n; i++){
        for(j = 0; j <= n-i; j++)
            printf("  ");
        for(j = 0; j <= i; j++)
            printf("%4d", combi(i, j));
        printf("\n");
    }
    return 0;
}

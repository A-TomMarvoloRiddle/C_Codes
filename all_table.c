
//Multiplication Tables
#include <stdio.h>
int main() {
    int n,i,j;
    printf("Enter the number(n): ");
    scanf("%d",&n);
    for (j=1; j<=10; j++) {
    	for (i=1; i<=n; i++) {
        	printf("%d x %2d = %1d", i, j, j*i);
        	printf("\t");
    	}
    	printf("\n");
	}
    return 0;
}

/*
//10x10 Table Matrix
#include<stdio.h>
int main() {
    int n,i,j;
	printf("\n");
    printf("Enter the number(n): ");
    scanf("%d",&n);
	printf("\n");
    for (j=1; j<=10; j++) {
    	for (i=1; i<=n; i++) {
        	printf("%d x %d = %1d",i,j,j*i);
        	printf("\t");
    	}
    	printf("\n");
	}
	printf("\n");
    return 0;
}
*/
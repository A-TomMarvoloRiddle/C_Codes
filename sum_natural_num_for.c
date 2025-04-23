#include <stdio.h>
int main() {
	int n,sum=0;
    printf("Enter the number(n): ");
    scanf("%d",&n);
	for (int i=1, j=n; i<=n && j>=1; i++, j-- ) {
		sum += i;
		printf("%d ",j);
	}
    printf("\nSum of first %d natural numbers = %d\n", n, sum);
	return 0;
}

//normal table
#include <stdio.h>
int main() {
    int n;
    printf("Enter the number(n): ");
    scanf("%d",&n);
    for (int i=1; i<=10; i++) {
        printf("%d x %d = %d\n", n, i, n*i);
    }
    return 0;
}

//reverse table
/*
#include <stdio.h>
int main() {
    int n;
    printf("Enter the number(n): ");
    scanf("%d",&n);
    for (int i=10; i>=1; i--) {
        printf("%d x %d = %d\n", n, i, n*i);
    }
    return 0;
}
*/

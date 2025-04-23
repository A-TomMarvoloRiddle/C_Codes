#include <stdio.h>
int main() {
    int n, temp, rem, result = 0;
    printf("Enter a three-digit integer: ");
    scanf("%d", &n);
    temp = n;

    while (temp != 0) {
        rem = temp % 10;
        result += rem * rem * rem;
        temp /= 10;
    }

    if (result == n)
        printf("%d is an Armstrong number.", n);
    else
        printf("%d is not an Armstrong number.", n);

    return 0;
}


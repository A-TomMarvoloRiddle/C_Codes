#include <stdio.h>

void main() {
    int n, i, j, flag = 1;
    char a[21], b[21];

    printf("Enter the length of the strings: ");
    scanf("%d", &n);
    printf("Enter first string: ");
    scanf("%s", a);
    printf("Enter second string: ");
    scanf("%s", b);

    for (i = 0; i < n && flag != 0; i++) {
        for (j = 0; j < n; j++) {
            if (b[i] == a[j]) {
                flag = 1;
                break;
            } else {
                flag = 0;
            }
        }
    }

    if (flag) {
        printf("The strings are anagrams.\n");
    } else {
        printf("The strings are NOT anagrams.\n");
    }
}

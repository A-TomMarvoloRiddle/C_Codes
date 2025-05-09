#include <stdio.h>
int main() {
    int year;
    int flag = 0;
    printf("Enter a year: ");
    scanf("%d", &year);
    if(year % 4 == 0) {
        flag = 1;
        if(year % 100 == 0) {
            flag = 0;
            if(year % 400 == 0) {
                flag = 1;
            }
        }
    }
    if(flag == 1) {
        printf("%d is a leap year.\n", year);
    } else {
        printf("%d is not a leap year.\n", year);
    }
    return 0;
}

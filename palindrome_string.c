#include <stdio.h>
int main() {
    int i,len,flag=0;
    char ori[100],rev[100];
    printf("Enter a string: ");
    gets(ori);
    for(len=0;ori[len]!='\0';len++);
    printf("The original string '%s'",ori);
    i=0;
    while(len>=0) {
        rev[i] = ori[len-1];
        len--;
        i++;
    }
    rev[i]='\0';
    printf("\nThe reverse string is '%s'",rev);
    i=0;
    while(len>=0) {
        if(rev[i] != ori[len-1]) {
            flag=1;
            break;
        }
        len--;
        i++;
    }
    if(flag==1)
        printf("\nString is not palindrome.");
    else
        printf("\nString is palindrome.");
    return 0;
}

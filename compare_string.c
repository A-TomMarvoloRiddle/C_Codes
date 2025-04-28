#include <stdio.h>
int main() {
    int i,flag=0;
    char a[100],b[100];
    printf("\nEnter the string a: ");
    gets(a);
    printf("\nEnter the string b: ");
    gets(b);
    for(i=0;a[i]!='\0' || b[i]!='\0';i++){
        if(a[i]!=b[i]) {
            flag=1;
            break;   
        }
    }
    if(flag==1)
        printf("\nStrings are different.\n");
    else
        printf("\nString are same.\n");    
    return 0;
}

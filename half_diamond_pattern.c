#include <stdio.h>
int main() {
int n,space; 
printf("Enter the number of rows: ");
scanf("%d",&n);
space=n;
// Run loop till the number of rows 
for (int i = 0; i < n; i++) { 
    // Loop for the initially space before the star printing 
    for (int j = 0; j < space; j++) 
        printf(" "); 
    // Print the i+1 stars 
    for (int j = 0; j <= i; j++) 
        printf("* "); 
    printf("\n"); 
    space--; 
}
return 0;
}

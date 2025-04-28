#include <stdio.h>
int main() {
    /*int age=18;
    int *ptr=&age;
    printf("%p\n",*ptr);
    printf("%u\n",&age);
    printf("%p\n",&age);
    printf("%u\n",&ptr);
    printf("%p\n",&ptr);
    
    int a[3][3]={9,4,6,7,6,4,9,8,4};
    //printf("%u\n",sizeof(a[0]));
    printf("%u\n",*a);
    printf("%u\n",*(*(a+1)+2));
    */
    int a[3][3],i,j;

    printf("\n");
    printf("Enter A:\n");
    for(i=0; i<3; i++) {
        for(j=0; j<3; j++) {
            scanf("%d",&a[i][j]);
        }
    }

    printf("\n");
    printf("Matrix A:\n");
    for(i=0; i<3; i++) {
        for(j=0; j<3; j++) {
            printf("%u\t",*(*(a+i)+j));
        }
    printf("\n");
    }
    rintf("\n");
    return 0;
}

#include<stdio.h> 
int main() {
int a[3][3], b[3][3], c[3][3]={0,0,0,0,0,0,0,0,0}, i, j;

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
        printf("%d\t",a[i][j]);
    }
    printf("\n");
}

printf("\n");
printf("Enter B:\n");
for(i=0; i<3; i++) {
    for(j=0; j<3; j++) {
        scanf("%d",&b[i][j]);
    }
}

printf("\n");
printf("Matrix B:\n");
for(i=0; i<3; i++) {
    for(j=0; j<3; j++) {
        printf("%d\t",b[i][j]);
    }
    printf("\n");
}

for(i=0;i<3;i++) {
    for(j=0;j<3;j++) {
        c[i][j]=a[i][j]+b[i][j];
    }
}

printf("\n");
printf("Result Matrix:\n");
for(i=0; i<3; i++) {
    for(j=0; j<3; j++) {
        printf("%d\t",c[i][j]);
    }
    printf("\n");
}
return 0; }

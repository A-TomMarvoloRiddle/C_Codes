#include<stdio.h> 
int main() {
int a[3][3], b[3][3], c[3][3]={0,0,0,0,0,0,0,0,0},i,j,k;

printf("\n");
printf("Enter Matrix A:\n");
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
printf("Enter Matrix B:\n");
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
        for (int k = 0; k < 3; k++) {
            c[i][j] += a[i][k] * b[k][i];
        }
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

printf("\n");
return 0;
}

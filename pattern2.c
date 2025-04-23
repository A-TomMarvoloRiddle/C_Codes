#include <stdio.h>
int main() {
	int x,y,r=5;	
    for (x=1; x<=r; x++){
        for (y=1; y<=r-x; y++){
            printf(" ");
        }
        for (y=1; y<=x; y++){
            printf("*");
        }
        printf("\n");
    }
    for (x=r; x>=1; x--){
        for (y=1; y<=r-x; y++){
            printf(" ");
        }
        for (y=1; y<=x; y++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}

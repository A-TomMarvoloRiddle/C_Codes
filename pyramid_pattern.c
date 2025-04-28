#include <stdio.h> 
int main() {
	int i,j,r=5; 
	for (i=0; i<r; i++) { 
		for (j=0; j<2*(r-i)-1; j++) { 
			printf(" "); 
		} 
		for (j = 0;j<2*i+1; j++) { 
			printf("* "); 
		} 
		printf("\n"); 
	} 
	return 0; 
}


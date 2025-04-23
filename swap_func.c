#include<stdio.h>
void swap(int *a,int *b) {
	*a=*a+*b;
	*b=*a-*b;
	*a=*a-*b;
}

int main() {
	int i,j;
	printf("Enter both number: ");
	scanf("%d %d",&i,&j);
	printf("a = %d & b = %d",i,j);
	printf("\n");
	swap(&i,&j);
	printf("Now a = %d & b = %d",i,j);
	return 0;	
}

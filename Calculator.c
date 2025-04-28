#include <stdio.h>
void main() {
char ch;
float a, b;
while (1) {
	printf("\nEnter an operator (+, -, *, /), " "if you wish to exit then enter 'c': ");
	scanf(" %c", &ch);
	if (ch == 'c')
		exit(0);
	switch (ch) {
	case '+':
        printf("Enter two operands: ");
        scanf("%f %f", &a, &b);
        printf("%.2f + %.2f = %.2f\n",a,b,a+b); 
        break;
	case '-':
        printf("Enter two operands: ");
        scanf("%f %f", &a, &b);
		printf("%0.2f - %0.2f = %0.2f\n",a,b,a-b);
		break;
	case '*':
        printf("Enter two operands: ");
        scanf("%f %f", &a, &b);
		printf("%0.2f * %0.2f = %0.2f\n",a,b,a*b);
		break;
	case '/':
        printf("Enter two operands: ");
        scanf("%f %f", &a, &b);
		printf("%0.2f / %0.2f = %0.2f\n",a,b,a/b);
		break;
	default:
		printf("Error! Please write a Valid Operator\n");
	}
	printf("\n");
	}
}

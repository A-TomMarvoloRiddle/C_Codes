#include <stdio.h>
int main() {
    char str[100],vowels[10] = "aeiouAEIOU";
    int i,j,vc[5]={0,0,0,0,0};

    printf("Enter a string: ");
    gets(str);

    for (i = 0; str[i] != '\0'; i++) {
        for (j = 0; j < 10; j++) {
            if (str[i] == vowels[j]) {
                if (j>4) {
                    j=j-5;
                }
                vc[j]++;
                break;
            }
        }
    }
    
    printf("\nVowel Frequencies: \n");
    for (i = 0; i < 5; i++) {
        if (vc[i] != 0) {
            printf("%c : %d\n", vowels[i], vc[i]);
        }
    }
    return 0;
}

//- First program counts occurrences of 1s and outputs 1 if even, 0 if odd
//- Second program counts 0s between pairs of 1s in sequence
//Both programs accept numeric input until -1 is encountered

#include <stdio.h>

int main() {
    int se, c = 0;
    printf("Enter sequence of numbers (-1 to stop):\n");
    scanf("%d", &se);
    while (se != -1) {
        if (se == 1)
            c++;
        scanf("%d", &se);
    }
    printf("Output: %d\n", (c % 2 == 0) ? 1 : 0);
    return 0;
}

int main() {
    int d, c = 0, res = 0;
    printf("Enter sequence of numbers (-1 to stop):\n");
    scanf("%d", &d);
    while (1) {
        if (d == -1)
            break;
        else if (d == 1) {
            do {
                scanf("%d", &d);
                if (d == 0)
                    c++;
            } while (d != 1 && d != -1);
            if (d != -1) {
                res += c;
                c = 0;
            }
        } else {
            scanf("%d", &d);
        }
    }
    printf("Output: %d\n", res);
    return 0;
}

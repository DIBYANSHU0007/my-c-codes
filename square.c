#include <stdio.h>

int main() {
    int i, j;
    i = 1;
    while(i <= 5) {
        j = 1;
        while(j <= 5) {
            printf("* ");  // Pf (hd) yahi tha tumhara
            j++;
        }
        printf("\n");
        i++;
    }
    return 0;
}
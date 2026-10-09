#include <stdio.h>
int main() {
    int num, i, start, end;
    printf("Enter Start:");
    scanf("%d", &start);

    printf("Enter end:");
    scanf("%d", &end);

    for (num = start; num <= end; num++) {
        printf("\nTable of %d\n", num);
        for (i = 1; i <= 10; i++) {
            printf("%d * %d = %d\n", num, i, num * i);
        }
    }
    return 0;
}
#include <stdio.h>
int main() {
    int pass;
    while(1) {
        printf("Enter password: ");
        scanf("%d", &pass);
        if(pass == 1234) {
            printf("Access Granted!\n");
            break;
        } else {
            printf("Wrong! Try again\n");
        }
    }
    return 0;
}
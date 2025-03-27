#include <stdio.h>

int main() {
    int a;
    
    printf("Enter a number: ");
    scanf("%d", &a);
    
    do {
        if (a % 2 == 0) {
            printf("a is even\n");
        } else {
            printf("a is not even\n");
        }
        printf("Enter another number (enter 0 to stop): ");
        scanf("%d", &a);

    } while (a > 0); 
    
    return 0;
}

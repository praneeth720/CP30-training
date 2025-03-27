#include<stdio.h>
int main()
{
    int i,j;
    for (i = 0; i < 16; i++) {
        for (j = 0; j < 16; j++) {
            unsigned short value = (i << 4) | j;
            printf("%c (%u) \n", value, value);
        }
        printf("\n");
    }
    return 0;
}
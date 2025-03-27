#include <stdio.h>
#include<string.h>
#include <stdlib.h>  // For system()
#include <conio.h>   // For getch()

int main(int argc, char *argv[]) {
    char command[50];

    strcpy(command, argv[1]);

    system(command);
    getch();

    return 0;
}
#include <stdio.h>
#include <stdlib.h>

int main() {
   int n;
    //printf("Enter the number of elements: ");
    //scanf("%d", &n);

    int* ptr = (int*)calloc(n, sizeof(int));

    //for (int i = 0; i < n; i++) {
      //  printf("Enter element %d: ", i + 1);
      // scanf("%d", &ptr[i]);
  // }

    printf("Elements in the allocated memory:\n");
   // for (int i = 0; i < n; i++) {
        printf("%d ", *ptr);
    //}
    printf("\n");
    //free(ptr);
   // return 0;
}
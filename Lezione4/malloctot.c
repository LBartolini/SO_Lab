#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int main(){

    printf("Dimensione int: %d\n", sizeof(int));
    printf("Dimensione float: %d\n", sizeof(float));

    for(int i = 0; i < INT_MAX; i++){
        int *temp = calloc(INT_MAX, INT_MAX);

        free(temp);
    }

    return 0;
}
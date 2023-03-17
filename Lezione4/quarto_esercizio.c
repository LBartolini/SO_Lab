#include <stdio.h>
#include <stdlib.h>

typedef char parola[20];

int main(){
    parola *p;

    int N;
    printf("Inserire valore di N: ");
    scanf("%d", &N);
    fflush(stdin);

    p = (parola*)malloc(N * sizeof(parola));

    for(int i = 0; i<N; i++){
        printf("Inserire parola %d:  ", i);
        scanf("%s", p[i]);
    }

    for(int i = N-1; i >= 0; i--){
        int trovato_EOS = 0;
        printf("Parola %d: ");
        for(int j = sizeof(parola)-1; j>=0; j--){
            if(p[i][j] == '\0'){
                trovato_EOS = 1;
                continue;
            }

            if(trovato_EOS){
                printf("%c", p[i][j]);
            }
        }
        printf("\n");
    }

    free(p);
    
    return 0;
}
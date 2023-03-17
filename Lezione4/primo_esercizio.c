#include <stdio.h>

struct Esempio {
    int a;
    float b;
    char c;
    char *d;
};

int main() {
    struct Esempio x;
    struct Esempio *p;

    p = &x;
    (*p).a = 12;
    printf("Valore di x.a: %d\n", x.a);
    x.c = 'z';
    printf("Valore di x.c %c\n", x.c);

    x.a = 100;
    printf("Valore di x.a: %d\n", x.a);

    (*p).a = 300;
    printf("Valore di x.a: %d\n", x.a);

    (*p).c = 's';
    printf("Valore di x.c: %c\n", x.c);

    x.d = &(x.c);
    printf("Valore puntato da d: %c\n", *(x.d));

    return 0;
}
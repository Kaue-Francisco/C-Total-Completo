#include <stdio.h>

void main(void) {
    int x;
    int *p1, *p2;

    p1 = &x;
    p2 = p1;

    printf("%p %p\n", p2, p1); /* escreve o endereço de x, não seu valor*/
}
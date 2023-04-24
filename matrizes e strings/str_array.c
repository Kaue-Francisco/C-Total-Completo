#include <stdio.h>

#define MAX 100
#define LEN 80

char text[MAX][LEN];

/* Um editor de texto muito simples. */
void main (void) 
{
    register int t, i, j;

    printf("Digite uma linha vazia para sair.\n");

    for (t=0; t < MAX; t++) {
        if (t < 10) {
            printf("0%d: ", t);
            scanf("%s", text[t]);
            if (!*text[t]) break;    
        } else {
            printf("%d: ", t);
            scanf("%s", text[t]);
            if (!*text[t]) break;
        }
    }

    for (i=0; i<t; i++) {
        for (j=0; text[i][j]; j++) putchar(text[i][j]);
        putchar('\n');
    }
}
#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

/* Um banco de dados simples para notas de aluno*/

#define CLASSES 3
#define GRADES 30

int grade[CLASSES][GRADES];

void enter_grades(void);
int get_grade(int num);
void disp_grades(int g[][GRADES]);

void main(void) {
    char ch, str[80];

    for(;;) {
        do {
            printf("(D)igitar notas\n");
            printf("(M)ostrar notas\n");
            printf("(S)air\n");
            scanf("%s", str);
            ch = toupper(*str);
        } while (ch != 'D' && ch != 'M' && ch != 'S');

        switch(ch) {
            case 'D':
                enter_grades();
                break;
            case 'M':
                disp_grades(grade);
                break;
            case 'S':
                exit(0);
        }
    }
}

/* Digita a nota dos alunos*/
void enter_grades(void) {
    int t, i;
    for (t=0; t<CLASSES; t++) {
        printf("Turma # %d:\n", t+1);
        for (i=0; i<GRADES; i++) {
            grade [t][i] = get_grade(i);
        }
    }
}

/* Lê uma nota. */
int get_grade (int num) {
    char s[80];

    printf("Digite a nota do aluno # %d:\n", num+1);
    scanf("%s", s);
    return (atoi(s));
}

/* Mostra as notas. */
void disp_grades(int g[][GRADES]) {
    int i, t;
    
    for(t=0; t<CLASSES; t++) {
        printf("Turma: %d\n", t+1);
        for (i=0; i<GRADES; ++i) {
            if (i+1 < 10) printf("Aluno: #0%d sua nota é %d\n", i+1, g[t][i]);
            else printf("Aluno: #%d sua nota é %d\n", i+1, g[t][i]);
        }
        printf(" \n");
    }
}
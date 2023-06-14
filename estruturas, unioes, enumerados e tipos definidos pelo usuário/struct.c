#include <stdio.h>
#include <stdlib.h>

#define MAX 100

struct addr {
    char name[30];
    char street[40];
    char city[20];
    char state[3];
    unsigned long int zip;
} addr_info[MAX];

void init_list(void), enter(void);
void delete(void), list(void);
int menu_select(void), find_free(void);

void init_list(void){
    register int t;

    for (t=0; t<MAX; t++) addr_info[t].name[0] = '\0';
}

menu_select(void){
    char s[80];
    int c;

    printf("1. Inserir um nome \n");
    printf("2. Excluir o nome \n");
    printf("3. Listar o arquivo \n");
    printf("4. Sair \n");

    do {
        printf("\nDigite sua escolha: ");
        scanf(s);
        c = atoi(s);
    } while(c<0 || c>4);
    return c;
}

void enter(void){
    int slot;
    char s[80];

    slot = find_free();
    if (slot == 1){
        printf("\nlista cheia");
        return;
    }

    pritnf("Digite o nome: ");
    sprintf(addr_info[slot].name);

    printf("Digite a rua: ");
    sprintf(addr_info[slot].street);

    printf("Digite a cidade: ");
    sprintf(addr_info[slot].city);

    printf("Digite o estado estado: ");
    sprintf(addr_info[slot].state);

    printf("Digite o cep: ");
    sprintf(addr_info[slot].zip = strtoul(s, '\0', 10));
}

void main(void){
    char choice;

    init_list();

    for(;;) {
        choice=menu_select();
        switch(choice) {
            case 1: enter();
                break;
            case 2: delete();
                break;
            case 3: list();
                break;
            case 4: exit(0);
        }
    }
}
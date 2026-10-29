#include <stdio.h>
#define MAX 1000 // define o máximo de caracteres que pode ser colocado na pilha - capacidade do vetor 'dados', não de qualquer string

typedef struct {
    char dados[MAX]; // 999 + \0
    int topo;
} Pilha;

void inicializar(Pilha *p);
void push(Pilha *p, char c);
char pop(Pilha *p);
int balanceada(char expressao[]);

#include <stdio.h>
#include <stdlib.h>

typedef struct No {
    int valor; //valor primitivo a ser inserido
    struct No *proximo; //ponteiro para o próximo nó
} No;

typedef struct Lista {
    No *cabeca; //pega a struct No e aponta para o primeiro item da lista
    int tamanho; //quantidade de nós da lista
} Lista;

void 

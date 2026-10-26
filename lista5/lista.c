#include <stdio.h>
#include "lista.h"

void inserir_meio(Lista *lista, int pos, int valor) { //sempre pega o primeiro nó, aí insere o valor. o último parâmetro é o valor a ser inserido.
    
    if (pos > lista->tamanho){
        printf("Posição não existe.\n");
        exit(1);
    }
    
    No *novo = malloc(sizeof(No));
    if (novo == NULL) return; //a função vai ser encerrada aqui com o return, pois nada mais da função vai retornar.
    novo->valor = valor; //o ponteiro recebe valor.
    novo->proximo = NULL; //o próximo recebe NULL

    if (lista->cabeca == NULL){ //se o nó cabeca é nulo, ele recebe um valor.
        lista->cabeca = novo;
        return;
    }

    No *atual = lista->cabeca; //o nó atual recebe o primeiro elemento
    for (int i = 0; i < pos-1; i++) //tem que ser a posição -1 pq tem que parar uma casa antes para apontar para o próximo.
        atual = atual->proximo;


    atual->proximo=novo;

    ;
};
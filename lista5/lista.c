#include <stdio.h>
#include <stdlib.h>
#include "lista.h"

void inserir_meio(Lista *lista, int pos, int valor) { //sempre pega o primeiro nó, aí insere o valor. o último parâmetro é o valor a ser inserido.
    
    if (pos < 0 || pos > lista->tamanho){
        printf("Posição não existe.\n");
        exit(1);
    }
    
    No *novo = malloc(sizeof(No));
    if (novo == NULL) return; //a função vai ser encerrada aqui com o return, pois nada mais da função vai retornar.
    
    novo->valor = valor; //o ponteiro recebe valor.
    novo->proximo = NULL; //o próximo recebe NULL

    //insere valor no início da lista
    
    if (pos == 0) {
        novo->proximo = lista->cabeca; //o novo nó aponta para o antigo primeiro nó.
        lista->cabeca = novo; //o nó cabeça recebe o novo valor
        lista->tamanho++; //a lista aumenta de tamanho com a inserção do novo nó
        return;
}
    //percorre a lista até o nó anterior à posição desejada
    
    No *atual = lista->cabeca; //o nó atual recebe o primeiro elemento
    for (int i = 0; i < pos-1; i++) { //tem que ser a posição -1 pq tem que parar uma casa antes para apontar para o próximo.
        atual = atual->proximo;
    }

    //insere o novo nó no meio ou no final
    // No meio, atual->proximo aponta para um nó que já existe.
    // No final, atual->proximo é NULL.
    
    novo->proximo = atual->proximo; //o novo elemento vai apontar para a posição que quer ocupar, por exemplo, quer ocupar a segunda posição, então aponta para o 2, já que ele precisa virar o 3
    atual->proximo = novo; //o elemento na posição 1 passa a apontar para o novo, que vai virar o segundo 

    lista->tamanho++;
};

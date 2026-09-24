#include <stdio.h>
#include <stdlib.h>
#include "vetor.h"

// APLICAÇÃO DOS ARQUIVOS VETOR.H E VETOR.C

int main() {
    Vetor v; //cria-se uma variável v do tipo Vetor

    // Vetor v começa com 2 posições alocadas
    v.tamanho_alocado = 2;
    v.tamanho_ocupado = 0;
    v.dados = malloc(v.tamanho_alocado * sizeof(int)); //cria 8bytes, espaço para 2 inteiros

    if (v.dados == NULL) {
        printf("Erro ao alocar memória.\n");
        return 1; //programa termina com erro
    }

    printf("Inicial:\n");
    show(&v); //mostra o array
    printf("Alocado: %d | Ocupado: %d\n", v.tamanho_alocado, v.tamanho_ocupado);

    // Inserindo elementos no array
    append(&v, 10); //posição 0
    append(&v, 20); //posição 1

    printf("Depois de inserir 10 e 20:\n");
    show(&v);
    printf("Alocado: %d | Ocupado: %d\n", v.tamanho_alocado, v.tamanho_ocupado);

    // Aqui o espaço acaba e o vetor dobra de tamanho com o realloc
    append(&v, 30);
    append(&v, 40);
    append(&v, 50);

    printf("Depois de inserir 30, 40 e 50:\n");
    show(&v);
    printf("Alocado: %d | Ocupado: %d\n", v.tamanho_alocado, v.tamanho_ocupado);

    // Slice
    Vetor s = slice(&v, 1, 3); //aplicação da função slice de tipo Vetor

    printf("Fatia do vetor [1, 3]:\n");
    show(&s); //mostra o novo vetor composto de parte do vetor original
    printf("Alocado: %d | Ocupado: %d\n", s.tamanho_alocado, s.tamanho_ocupado);

    // Pop
    pop(&v); //tira o último elemento do vetor

    printf("Depois de pop no vetor original:\n");
    show(&v);
    printf("Alocado: %d | Ocupado: %d\n", v.tamanho_alocado, v.tamanho_ocupado);

    // Liberação da memória
    free(v.dados);
    free(s.dados);

    return 0;
} 

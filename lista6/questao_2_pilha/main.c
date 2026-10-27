#include <stdio.h>
#include "vetor.c" //não precisa do string, pois o MAX já ajuda na parte do char. Não tem chamada de recurso da biblioteca.

int main() {
    char expressao[MAX]; // capacidade da string

    printf("Digite uma expressao: ");
    fgets(expressao, MAX, stdin);

    if (balanceada(expressao)) {
        printf("Expressao balanceada!\n");
    } else {
        printf("Expressao nao balanceada!\n");
    }

    return 0;
}


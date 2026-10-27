#include <stdio.h>
#include "vetor.c"

int main() {

    int N, K;
    Fila fila;

    inicializar(&fila);

    printf("Digite o numero de criancas: ");
    scanf("%d", &N);

    printf("Digite o valor de K: ");
    scanf("%d", &K);

    // Coloca as crianças de 1 até N na fila
    for (int i = 1; i <= N; i++) {
        enqueue(&fila, i);
    }

    printf("\nOrdem de eliminacao:\n");

    // Continua enquanto houver mais de uma criança
    while (fila.quantidade > 1) {

        // Passa a batata por K - 1 crianças
        for (int i = 0; i < K - 1; i++) {

            int crianca = dequeue(&fila);

            enqueue(&fila, crianca);
        }

        // A próxima criança é eliminada
        int eliminada = dequeue(&fila);

        printf("%d ", eliminada);
    }

    // A única criança restante é a vencedora
    int vencedora = dequeue(&fila);

    printf("\nVencedora: %d\n", vencedora);

    return 0;
}
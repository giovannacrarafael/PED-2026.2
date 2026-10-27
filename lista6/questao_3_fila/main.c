#include <stdio.h>
#include "vetor.c"

int main() {

    int N, K; // quantidade de crianças da fila e número de vezes que a batata vai passar
    Fila fila; //chama a struct Fila

    inicializar(&fila); //inicia a fila em zero

    printf("Digite o numero de criancas: ");
    scanf("%d", &N);

    printf("Digite o valor de K (numero de vezes que a batata vai passar): ");
    scanf("%d", &K);

    // Coloca as crianças de 1 até N na fila
    for (int i = 1; i <= N; i++) {
        enqueue(&fila, i);
    }

    printf("\nOrdem de eliminacao:\n");

    // Continua enquanto houver mais de uma criança
    while (fila.quantidade > 1) {

        // Passa a batata por K - 1 crianças
        for (int i = 0; i < K - 1; i++) { // a K-ésima criança que sai, portanto tem que ser K - 1 para manter a criança anterior
            int crianca = dequeue(&fila);
            enqueue(&fila, crianca); //indica que a batata está passando, colocando a criança que foi retirada da primeira posição na última posição
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
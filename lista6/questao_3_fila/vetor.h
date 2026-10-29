#include <stdio.h>
#define MAX 1000

typedef struct { // cria a struct para fila
    int dados[MAX];
    int inicio; // tem início e fim por conta da saída e da entrada de dados
    int fim;
    int quantidade;
} Fila;

void inicializar(Fila *f);
void enqueue(Fila *f, int valor);
int dequeue(Fila *f);

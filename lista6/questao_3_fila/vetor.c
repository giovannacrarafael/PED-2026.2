#include <stdio.h>
#define MAX 1000

typedef struct { // cria a struct para fila
    int dados[MAX];
    int inicio; // tem início e fim por conta da saída e da entrada de dados
    int fim;
    int quantidade;
} Fila;


// Inicializa a fila com todos os índices em zero
void inicializar(Fila *f) {
    f->inicio = 0;
    f->fim = 0;
    f->quantidade = 0;
}


// Insere uma criança no final da fila
void enqueue(Fila *f, int valor) { //enqueue é função de inserção de dados no fim da fila
    if (f->quantidade < MAX) {
        f->dados[f->fim] = valor;
        f->fim = (f->fim + 1) % MAX; // pega o resultado da divisão pelo número máximo de elementos da fila para transformar o movimento em círculo
        f->quantidade++; //aumenta a quantidade de crianças na fila
    }
}


// Retira uma criança do início da fila
int dequeue(Fila *f) { //dequeue é função de retirada de dados no início da fila
    int valor = f->dados[f->inicio];

    f->inicio = (f->inicio + 1) % MAX;
    f->quantidade--;

    return valor;
}
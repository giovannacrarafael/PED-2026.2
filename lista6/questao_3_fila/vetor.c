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
/* 
O resto da divisão serve para organizar a fila em um círculo, 
já que as crianças que recebem a batata precisam sair da frente e voltar para o final várias vezes.
*/

// Retira uma criança do início da fila
int dequeue(Fila *f) { //dequeue é função de retirada de dados no início da fila
    int valor = f->dados[f->inicio]; //guarda o primeiro elemento que será retirado da fila na variável valor
                //^índice  ^valor guardado

    f->inicio = (f->inicio + 1) % MAX; //o próximo elemento passa a ser o início da fila, mas não tira o elemento da memória - ele continua guardado, só deixa de ser considerado na fila
            // (0 + 1) % 1000 -> retorna a posição 1 do vetor (segundo elemento), ou (1 + 1) % 1000 -> retorna a posição 2 do vetor (terceiro elemento).
            //a MAX pega o ÍNDICE, não o valor guardado em tal posição
    f->quantidade--; // tira uma criança da fila, deixando de considerar a posição retirada do início, mesmo que ela esteja na memória
    

    return valor; //indica o valor retirado da fila
}

/* EXEMPLO DE FUNCIONAMENTO DA DEQUEUE
[ 10 ][ 20 ][ 30 ]
   ↑
  início

       ↓ dequeue

1. Guarda 10            int valor = f->dados[f->inicio];

2. Move início
        ↓
[ 10 ][ 20 ][ 30 ]      f->inicio = (f->inicio + 1) % MAX; (0 + 1) % 1000 == 1

3. quantidade: 3 → 2    DECREMENTO

4. retorna 10           return valor;
*/
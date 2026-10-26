#include <stdio.h>
#include <string.h>

#define MAX 1000

typedef struct {
    char dados[MAX];
    int topo;
} Pilha;

void inicializar(Pilha *p) {
    p->topo = -1;
}

int pilha_vazia(Pilha *p) {
    return p->topo == -1;
}

void push(Pilha *p, char c) {
    if (p->topo < MAX - 1) {
        p->dados[++p->topo] = c;
    }
}

char pop(Pilha *p) {
    if (pilha_vazia(p)) {
        printf("Erro: pilha vazia!\n");
        return '\0';
    }

    return p->dados[p->topo--];
}

int balanceada(char expressao[]) {
    Pilha p;
    inicializar(&p);

    for (int i = 0; expressao[i] != '\0'; i++) {
        char c = expressao[i];

        if (c == '(' || c == '[' || c == '{') {
            push(&p, c);
        }
        else if (c == ')' || c == ']' || c == '}') {
            if (pilha_vazia(&p)) {
                return 0;
            }

            char abertura = pop(&p);

            if ((c == ')' && abertura != '(') ||
                (c == ']' && abertura != '[') ||
                (c == '}' && abertura != '{')) {
                return 0;
            }
        }
    }

    return pilha_vazia(&p);
}

int main() {
    char expressao[MAX];

    printf("Digite uma expressao: ");
    fgets(expressao, MAX, stdin);

    if (balanceada(expressao)) {
        printf("Expressao balanceada!\n");
    } else {
        printf("Expressao nao balanceada!\n");
    }

    return 0;
}


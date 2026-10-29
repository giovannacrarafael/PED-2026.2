#include <stdio.h>

void inicializar(Pilha *p) {
    p->topo = -1; // começa do -1 porque o índice começa do zero. Percorre a pilha.
}

int pilha_vazia(Pilha *p) {
    return p->topo == -1; // tem que ser -1 para a pilha voltar ao índice zero.
}

void push(Pilha *p, char c) { //em dada posição da pilha, insira um caracter
    if (p->topo < MAX - 1) { //evita ultrapassar a capacidade da pilha, já que fica 999
        p->dados[++p->topo] = c; //insere o dado no topo da pilha (p está sem o asterisco, então se refere à posição da memória)
    }
}

char pop(Pilha *p) {
    if (pilha_vazia(p)) {
        printf("Erro: pilha vazia!\n");
        return '\0'; //caracter nulo que sempre aparece ao fim de toda string
    }

    return p->dados[p->topo--]; //se não, retorna uma posição a menos da pilha quando fechar o padrão encontrado na ida e na volta da pilha
}

// A função a seguir vai percorrer a pilha com os dados inseridos e verificar se o abre-fecha está balanceado
int balanceada(char expressao[]) { //aqui não precisa colocar o MAX, pois isso já é feito no main
    Pilha p; //chama a struct pilha
    inicializar(&p); //chama a função de inicializar na posição de memória p da struct. p é a struct em si, e &p é o endereço de memória da struct.

/*Pilha p
   ↓
variável normal

&p
 ↓
endereço da pilha p
 ↓
pode ser recebido por Pilha * */

    for (int i = 0; expressao[i] != '\0'; i++) { //se o índice recebe 0 e a expressão na posição i for diferente de nulo, então incrementa
        char c = expressao[i]; //o caracter vai para a posição no índice da expressão

        if (c == '(' || c == '[' || c == '{') { //se o caracter for alguns dos discriminados...
            push(&p, c); // insira um elemento na estrutura pilha
        }
        else if (c == ')' || c == ']' || c == '}') { //ou então acrescenta esses outros caracteres
            if (pilha_vazia(&p)) { //se acrescentar e der pilha vazia, retornar 0 - nada.
                return 0;
            }

            char abertura = pop(&p); //retira o elemento do topo da pilha e guarda na variável abertura, então se for {, guarda {, por exemplo.

            if ((c == ')' && abertura != '(') ||
                (c == ']' && abertura != '[') ||
                (c == '}' && abertura != '{')) {
                return 0; //indica que a expressão não está balanceada, pois a abertura é diferente do fechamento
            }
        }
    }

    return pilha_vazia(&p); //depois de combinar todos os símbolos abre-fecha, a pilha retorna vazia
}



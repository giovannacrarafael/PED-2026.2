#include <stdio.h>
#include <stdlib.h> //bibliotecas que têm os allocs
#include "vetor.h" //bibliotecas criadas têm que vir com aspas duplas

//LEMBRAR QUE SIZEOF(INT) É NORMALMENTE 4BYTES, ENTÃO MULTIPLICA POR 4

void append(Vetor *v, int valor) { //append acrescenta valores ao final do vetor
    if (v->tamanho_ocupado == v->tamanho_alocado) { // -> acessa a estrutura para a qual a seta aponta e, dentro, pega o valor. . acessa a struct, e -> indica o ponteiro.
        v->tamanho_alocado == v->tamanho_alocado * 2; //o tamanho alocado acabou, então dobra o tamanho. Pode ser v->tamanho_alocado *= 2

        v->dados = realloc(v->dados, v->tamanho_alocado * sizeof(int)); // realloc para realocar memória
                                                        // sizeof(int) muito usado para ponteiros e alocação de memória. 
                                                        // int normalmente é 4bytes (32bits), mas pode não ser, então é melhor sizeof(int).
                                                        // realloc trabalha com bytes.
        if (v->dados == NULL) { //o ponteiro não aponta para uma região válida de memória. O computador não conseguiu alocar a memória requisitada.
            printf("Erro na realocação de memória.\n");
            exit(1); //o 0 indica que o programa foi encerrado sem problemas, e o 1 indica que aconteceu com problemas.
        }
    }

    v->dados[v->tamanho_ocupado] = valor; //AQUI FAZ O APPEND, COLOCANDO O NOVO VALOR NA POSIÇÃO QUE ESTÁ LIVRE APÓS O REALLOC
    v->tamanho_ocupado++; //INCREMENTA O VALOR DA "CAIXINHA" DE MEMÓRIA COM OS NOVOS VALORES INSERIDOS
}

/* OUTRA FORMA DE FAZER O CÓDIGO APPEND USANDO PONTEIRO TEMPORÁRIO PARA NÃO PERDER A MEMÓRIA ANTIGA SE O REALLOC FALHAR
A memória antiga pode continuar alocada, mas não existe mais o ponteiro para acessá-la. Isso é um vazamento de memória (memory leak).

void append(Vetor *v, int valor) 
{
    if (v->tamanho_ocupado == v->tamanho_alocado) {

        v->tamanho_alocado *= 2;

        // Ponteiro temporário recebe o resultado do realloc
        int *temp = realloc(
            v->dados,
            v->tamanho_alocado * sizeof(int)
        );

        // Verifica se a realocação falhou
        if (temp == NULL) {
            printf("Erro ao realocar memória.\n");
            exit(1);
        }

        // Se deu certo, atualiza o ponteiro original
        // Só altera o vetor depois que realloc funcionou
        v->dados = temp;
        v->tamanho_alocado = novo_tamanho;
    }

    v->dados[v->tamanho_ocupado] = valor;
    v->tamanho_ocupado++;
}
    Nunca sobrescrever o único ponteiro para uma memória dinâmica com o resultado de realloc() antes de verificar se ele retornou NULL.*/

void show(Vetor *v) { //função para mostrar o array na tela
    printf("[ ");

    for (int i = 0; i < v->tamanho_ocupado; i++) { // laço for para repetição até que uma condição seja atingida
        printf("%d", v->dados[i]); // o i representa a posição no array que os dados foram inseridos na ordem em que aparecem

        if (i < v->tamanho_ocupado - 1) { //se a posição ocupada não for a última, coloque vírgula para separar os elementos.
            printf(", "); // v->tamanho_ocupado - 1 é o último elemento, já que o índice começa em 0, então se forem 4 posições: 0,1,2,3 (4 - 1)
        }
    }

    printf(" ]\n");
}

Vetor slice(Vetor *v, int x0, int x1) { // a slice pega um intervalo dentro de um vetor. Retorna uma variável do tipo vetor.
                                        // x0 é posição inicial e x1 é posição final. tem que receber um ponteiro para o vetor original, por isso *v.
    if (x0 < 0 || x1 >= v->tamanho_ocupado || x0 > x1) { //verificação das entradas do slice e validação para evitar acesso de memória fora do slice
        //a posição inicial é menor que 0 OU a posição final é maior ou igual ao tamanho do vetor OU a posição inicial é maior do que a final (inversão)?
        printf("Intervalo inválido.\n");
        exit(1); //o programa termina com erro
    }
    
    Vetor novo; // precisa criar uma nova variável porque ela deve retornar somente o vetor fatiado, e não o vetor original, então a struct se modifica

    int quantidade = x1 - x0 + 1; //aqui serve para saber quantos dados comporão o novo vetor: posição final menos posição inicial mais um, pois tem que incluir o elemento da última posição

    novo.tamanho_alocado = quantidade; //CAPACIDADE - essa parte serve para definir os novos espaços de memória com a quantidade do novo vetor
    novo.tamanho_ocupado = quantidade; //OCUPAÇÃO - os números serão idênticos, pois o vetor terá o mesmo espaço do número de elementos do slice

    novo.dados = malloc(quantidade * sizeof(int)); //memory allocation: reserva memória dinamicamente enquanto o programa está sendo executado
    //aqui serve para indicar a reserva de memória suficiente para guardar "quantidade" e a alocação do endereço dessa memória em novo.dados

    if (novo.dados == NULL) { //mesmo erro do append
        printf("Erro ao alocar memória.\n");
        exit(1);
    }
    //agora sim o programa copia os elementos do vetor original para o novo vetor
    for (int i = 0; i < quantidade; i++) { //o índice começa no zero, e se o índice for menor que a quantidade de elementos alocados, os espaços do índice devem ser incrementados
        novo.dados[i] = v->dados[x0 + i]; //o novo array de dados terá o dado da posição inicial mais a quantidade de dados inseridos até a quantidade máxima do slice
    } //o i controla a posição do novo vetor: "Na posição i do novo vetor, coloque o elemento que está na posição x0 + i do vetor original."

    return novo; //retorna a nova struct vetor criada
}

/*
1. Recebe v, x0 e x1
        ↓
2. Verifica se x0 e x1 é um intervalo válido
        ↓
3. Declara variável do tipo Vetor "novo"
        ↓
4. Calcula a quantidade do array a ser extraído do original
        ↓
5. malloc() reserva a memória com a quantidade exata do novo array
        ↓
6. Verifica se malloc() funcionou
        ↓
7. Copia os elementos
        ↓
8. Retorna novo array
*/

void pop(Vetor *v) { //remove o último elemento do vetor
    if (v->tamanho_ocupado > 0) {
        v->tamanho_ocupado--; //operação de decremento - tira o último da lista, mas ele continua na memória. Pode ser sobrescrito.
    }
} 

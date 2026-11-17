#ifndef FILA_H
#define FILA_H

#define MAX_FILA 100 // quantidade reservada de atendimentos por dia

typedef enum SituacaoAtendimento {
    REALIZADO,
    CANCELADO
} SituacaoAtendimento;

typedef struct Atendimento {
    int id_atendimento;
    int id_animal; // só o ID do animal já basta, pois as informações de cadastro estarão guardadas em Animal
    SituacaoAtendimento situacao;
} Atendimento;

typedef struct Fila { // FIFO
    Atendimento dados[MAX_FILA]; // pega os dados de id do atendimento e do animal
    int inicio; // estabelece o início da fila, o primeiro a ser removido
    int fim; // estabelece o fim da fila, onde será inserido o próximo valor
    int quantidade; // número de atendimentos na fila
} Fila;

void inicializar_fila(Fila *fila); 
/*essa é necessária para preparar a fila para os dados, deixando os valores de início, de fim e de quantidade corretos 
se não fizer isso, a fila não se inicia automaticamente do zero, provocando erros no cadastro de dados.
criar uma função fila ajuda a repeti-la em outros locais de código, facilitando a manutenção.
A FILA PRECISA SER INICIADA ANTES DA PRIMEIRA OPERAÇÃO NA FILA, E NÃO ANTES DE CADA CADASTRO!!!
*/
int cadastro_atendimento(Fila *fila, Atendimento atendimento);
int busca_por_atendimento(const Fila *fila, int id_atendimento); //const é de constante, já que não pode modificar a fila em uma busca simples de dados
int cadastro_situacao_atendimento(Fila *fila, int id_atendimento, Atendimento situacao);
int atualizacao_cadastro_atendimento(Fila *fila, int id_atendimento, Atendimento nova_situacao);
int excluir_atendimento(Fila *fila, int id_atendimento);

#endif
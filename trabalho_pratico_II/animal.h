#ifndef ANIMAL_H // verifica se não há .h com o mesmo definidor
#define ANIMAL_H // cria o header com o nome dado | NÃO UTILIZAR PONTO-E-VÍRGULA
#include "datahora.h"

// cria as structs para os blocos enum e data do bloco Animal

typedef enum Sexo { // outro tipo de typedef para estruturas pré-estabelecidas (conjunto limitado de valores)
    MACHO, // quando é enum, a lista é separada por vírgula e não tem vírgula no elemento final, tal como o banco de dados
    FEMEA // letra maiúscula para diferenciar de variáveis | não é obrigatório em C, mas auxilia para evitar confusão
} Sexo;

typedef enum Especie {
    CANINA,
    FELINA,
    OUTRA
} Especie;

typedef enum Porte {
    MINI,
    PEQUENO,
    MEDIO,
    GRANDE
} Porte;

typedef enum Situacao {
    ATIVO,
    EM_TRATAMENTO,
    INATIVO
} Situacao;

typedef enum Raca {
    SHIH_TZU,
    YORKSHIRE,
    POODLE,
    MALTES,
    LULU_DA_POMERANIA,
    PINSCHER,
    CHIHUAHUA,
    PUG,
    BULLDOG_FRANCES,
    BULLDOG_INGLES,
    GOLDEN_RETRIEVER,
    LABRADOR,
    PASTOR_ALEMAO,
    ROTTWEILER,
    PITBULL,
    DOBERMAN,
    BORDER_COLLIE,
    BEAGLE,
    DACHSHUND,
    BOXER,
    HUSKY_SIBERIANO,
    DALMATA,
    SCHNAUZER,
    SPITZ_ALEMAO,
    COCKER_SPANIEL,
    CANE_CORSO,
    AKITA,
    CHOW_CHOW,
    SEM_RACA_DEFINIDA_CAO,
    SIAMES,
    PERSA,
    MAINE_COON,
    RAGDOLL,
    SPHYNX,
    BENGAL,
    ANGORA,
    BRITISH_SHORTHAIR,
    SCOTTISH_FOLD,
    ABISSINIO,
    BIRMANES,
    HIMALAIO,
    RUSSO_AZUL,
    SAVANNAH,
    NORUEGUES_DA_FLORESTA,
    EXOTICO_DE_PELO_CURTO,
    SEM_RACA_DEFINIDA_GATO,
    OUTRA_ESPECIE_ANIMAL
} Raca;

typedef struct Animal { // struct principal de cadastro de animais
    int id;
    char nome[50];
    Especie especie; // pega as typedefs anteriores
    Data data_nascimento; 
    Sexo sexo;
    char cor[30];
    Raca raca;
    Porte porte;
    Situacao situacao;
} Animal;

// as funções abaixo serão do tipo int para retornar 1 ou 0, a fim de identificar o sucesso ou a falha da operação

int cadastro_animal(Animal animais[], int *quantidade); // o ponteiro em quantidade permite incremento de animais da lista
int busca_por_animal(Animal animais[], int quantidade, int id); // o int quantidade sem ponteiro serve somente para indicar quantos animais estão no array. dá pra usar const aqui também.
int cadastro_situacao_animal(Animal animais[], int quantidade, int id, Situacao situacao);
int atualizacao_cadastro_animal(Animal animais[], int quantidade, int id);
int excluir_animal(Animal animais[], int *quantidade, int id); // o ponteiro em quantidade permite decremento de animais da lista

/* Todas as funções são do tipo int porque retornam ou 0, para falha, ou 1, para sucesso. */

#endif
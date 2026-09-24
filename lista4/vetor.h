#ifndef VETOR_H //interessante manter o _H para indicar que vem de header
#define VETOR_H //impede a criação de arquivo duplicado


typedef struct{ //typedef ajuda a não ficar chamando struct o tempo todo no main
    int *dados;
    int tamanho_alocado;
    int tamanho_ocupado;
} Vetor;


void append(Vetor *v, int valor); //acrescenta dado ao fim do array
void show (Vetor *v); //imprime os elementos que já ocupam espaço no array de forma organizada
Vetor slice(Vetor *v, int x0, int x1); //cria um novo vetor com as posições indicadas, ex. 1 e 3, 0 e 4, etc.
void pop(Vetor *v); //remove o último elemento do vetor


#endif //precisa disso ao final


// .h declara que as funções existem. Mostra como as funções podem ser implementadas.
// É a interface do TAD. É no vetor.c que as funções devem ser estabelecidas por completo.
// Devem ser usados três tipos de arquivos: main.c, vetor.c e vetor.h.

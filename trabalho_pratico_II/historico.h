#ifndef HISTORICO_H
#define HISTORICO_H
#include "atendimento.h" // puxa as informações do atendimento para gerar o histórico

typedef struct NoHistorico { //struct de lista encadeada
    Atendimento dados;
    struct NoHistorico *proximo; 
} NoHistorico;

/* Uma struct pode conter um ponteiro para uma estrutura do mesmo tipo (self-referential struct).
Isso é que permite construir listas encadeadas.*/

void consultar_historico (const NoHistorico *inicio, int id_animal);

// É interessante manter o const quando a função for somente para consulta, a fim de impedir a modificação dos dados 

#endif
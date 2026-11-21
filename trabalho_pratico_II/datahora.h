#ifndef DATAHORA_H
#define DATAHORA_H

// Foi criado um header específico para data e hora, pois assim vários outros podem somente chamar este header, não precisando repetir as structs em todos os headers.

typedef struct Data {
    int dia;
    int mes;
    int ano;
} Data;

typedef struct Hora {
    int hora;
    int minuto;
} Hora;

typedef struct DataHorario {
    Data data;
    Hora horario;
} DataHorario;

#endif
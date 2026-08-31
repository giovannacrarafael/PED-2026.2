#include <stdio.h>
#include <string.h> 

/* 
Foi usada a função strlen(), que serve para medir o tamanho do texto inserido.
A string.h também possui várias outras funções comuns, como strcmp() para comparar strings, 
strcpy() para copiar uma string e strcat() para juntar strings.

VAI DAS PONTAS PARA O MEIO DA PALAVRA: 

A==A início 2 e fim 2
R!=D início 1 e fim 3
A==A início 0 e fim 4
A R A D A
0 1 2 3 4

A==A início 2 e fim 2 CASO BASE
R==R início 1 e fim 3
A==A início 0 e fim 4
A R A R A
0 1 2 3 4 --> o índice começa do zero igual python, por isso strlen(palavra) - 1 (tamanho da palavra menos 1)

*/ 

int isPalindromo(char palavra[], int inicio, int fim){

    if (inicio >= fim) { // É >= e não só == porque os índices podem se cruzar com palavras de letras pares (exemplo, ANNA, em que início > fim).
        return 1; // retorna verdadeiro para palíndromo se as letras do início e do fim, lidas de fora para dentro, são iguais
    } // Cheguei ao meio? Sim → return 1 (CASO BASE)

    if (palavra[inicio] != palavra[fim]) {
        return 0; //As letras são diferentes? Sim → return 0 (CASO BASE)
    }
    return isPalindromo(palavra, inicio + 1, fim - 1); //Se não aconteceu nenhuma das situações acima, continuo verificando a palavra.

} 

int main(){

char palavra[30]; // Precisa de um tamanho da string. Pode ser qualquer número. O char é do C, pq não existe tipo str como em outras linguagens.

    printf("Digite uma palavra: ");
    scanf("%29s", palavra); // É um a menos de 30 pq o último caracter é sempre reservado para o final da palavra \0. s é de string.
    //tem que ser %s em vez de %c pq o primeiro lê uma string até encontrar espaço, enter ou atingir o limite de 29 caracteres.
    //o %c lê EXATAMENTE 29 caracteres, o que não é ideal para ler palavra.
    int fim = strlen(palavra) - 1; // Tem que colocar o -1 pq a última casa é o caracter vazio (\0) e o índice começa do 0. AQUI MEDE O TAMANHO DA PALAVRA.

    if (isPalindromo(palavra, 0, fim)) { // SE A PALAVRA DO ÍNDICE ZERO AO FIM COINCIDIR COM A FUNÇÃO, ENTÃO É PALÍNDROMO
        printf("A palavra inserida é um palíndromo.");
    } else {
        printf("A palavra inserida NÃO é um palíndromo.");
    }

return 0;

}
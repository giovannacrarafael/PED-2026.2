/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int N; // int é 32 bits, long long é 64 bits pelo menos
    long long soma = 0, valor; // long long substitui o int para não dar overflow com números grandes
    
    printf("Digite a quantidade de valores do intervalo: ");
    scanf("%d", &N);
    
    for (int i = 0; i < N; i++) {
        printf("Digite o %dº valor: ", i + 1); //quais são os números do intervalo? / o i+1 anda com o i do range
        scanf("%lld", &valor); //%lld é o long long int
        soma = soma + valor; // igual soma += valor do python
    }
    
    printf("A soma de todos os números do intervalo até %d números é %lld.", N, soma); // o print tem que sair do for para imprimir só o resultado final, não todos os parciais
    
    return 0;
}

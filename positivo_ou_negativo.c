/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int A;
    
    printf("Insira um número para verificação: ");
    scanf("%d", &A);
    
    if (A < 0){ // tem que usar as chaves em estruturas condicionais
        printf("O número inserido é negativo.");
    } else if (A > 0) { // não existe elif no C
        printf("O número inserido é positivo.");
    } else {
        printf("O número inserido não tem sinal, pois é o zero.");
    }
    
    return 0;
}
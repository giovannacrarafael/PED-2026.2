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
    
    if (A % 2 == 0){ // tem que usar as chaves em estruturas condicionais
        printf("O número inserido é par.");
    } else { // observar abertura e fechamento das chaves
        printf("O número inserido é ímpar.");
    }
    
    return 0;
}

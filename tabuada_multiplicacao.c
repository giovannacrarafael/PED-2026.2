/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main() 
{   
    int N;
    
    printf("Digite um número para saber sua tabuada de multiplicação: ");
    scanf("%d", &N);
    
    for (int i = 0; i <= 10; i++) {
        printf("%d x %d \t= %d\n", N, i, N * i); //N é o que a pessoa coloca, i é de 0 a 10. \t é tabulação
    }
    
    return 0;
}
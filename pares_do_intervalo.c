/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int N, contador = 0;
    
    printf("Digite um número para representar a quantidade de números do intervalo: ");
    scanf("%d", &N);
    
    for (int i = 1; i <= N; i++){ //i=1 pq parte do 1, e não do 0, a verificação
        if (i % 2 == 0){
            contador++; // forma reduzida de escrever contador = contador + 1
        }
    }
    
    printf("No intervalo de 1 a %d, há %d números pares.", N, contador);

    return 0;
}
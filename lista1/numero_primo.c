/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

//UTILIZAR A TÉCNICA DOS NÚMEROS ATÉ ANTES DA RAIZ QUADRADA
//Se N <= 1:
    //não é primo, pois o primo é o divisível por 1 e por ele mesmo
//Senão:
    //para cada número i começando em 2:
        //verificar se N % i == 0
        //se for resto 0:
            //não é primo
            //parar
    //se nenhum divisor foi encontrado com os números até a raiz quadrada:
        //é primo

int main()
{
    int N, i, primo = 1; // se for primo, recebe 1; se não, recebe 0. é a variável bool do python (V ou F). Tem stdbool.h de biblioteca bool.
    
    printf("Escreva um número para verificação: ");
    scanf("%d", &N);
    
    if (N <= 1){
        primo = 0; // é para testar o i a partir de 2, já que 1 e 0 não são primos, ou seja, bool false
    } else {
        for (i = 2; i * i <= N; i++){ // i*i é i ao quadrado, ou seja, testa o i^2 até quando esse i for menor ou igual ao N, isto é, enquanto o i for menor ou igual à raiz quadrada de N
            if (N % i == 0){
                primo = 0; // bool false, isto é, não é primo
                break; // para o laço até que o quadrado de i ultrapasse o N
            }
        }
    }
    
    if (primo == 1){
        printf("O número %d é primo. ", N);
    } else {
        printf("O número %d não é primo. ", N);
    }

    return 0;
}

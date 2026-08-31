/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int A, B;
    printf("Insira um número A: ");
    scanf("%d", &A);
    printf("Insira um número B: ");
    scanf("%d", &B);
    
    A = A + B; // A soma dos dois é o início para a subtração de cada um, pois, se subtrai um dos fatores, dá o outro fator trocado
    B = A - B; // Subtraindo o valor original de B da soma, dá o valor original de A
    A = A - B; // volta na variável A e subtrai o novo valor de B

    printf("Trocando=os de posição, os números ficam: \n");
    printf("                A = %d\n", A);
    printf("                B = %d\n", B);

    return 0;
}

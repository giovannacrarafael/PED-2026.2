/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    float A, B, C;
    printf("Digite o primeiro lado do triângulo: ");
    scanf("%f", &A);
    printf("Digite o segundo lado do triângulo: ");
    scanf("%f", &B);
    printf("Digite o terceiro lado do triângulo: ");
    scanf("%f", &C);
    
    if (A >= B + C || B >= A + C || C >= A + B) {
        printf("Um lado deve ser sempre menor do que a soma dos outros dois. Tente novamente.\n");
        printf("Digite o primeiro lado do triângulo: ");
        scanf("%f", &A);
        printf("Digite o segundo lado do triângulo: ");
        scanf("%f", &B);
        printf("Digite o terceiro lado do triângulo: ");
        scanf("%f", &C);
    } else if (A == B && B == C) {
        printf("Este triângulo é equilátero. ");
    } else if (A == B && A != C || A == C && A != B || B == C && B != A) {
        printf("Este triângulo é isósceles. ");
    } else {
        printf("Este triângulo é escaleno. ");
    }

    return 0;
}

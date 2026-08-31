/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h> //printf e scanf
#include <math.h>//importa o pi como M_PI

int main()
{
    printf("     CÁLCULO DE ÁREAS\n");
    printf("   ***Área do círculo***\n");
    float raio, resultado;
    printf("Digite o raio do círculo: ");
    scanf("%f", &raio);
    resultado = M_PI * pow(raio, 2); //cálculo de potência é a função power
    // pow(x,2)
    printf("A área do círculo de raio %.2f é %.2f.", raio, resultado);
    
    
    return 0;
}

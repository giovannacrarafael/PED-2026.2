/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <math.h>


int main()
{
    int segundos;
    int horas, minutos, segundos_restantes;
    
    printf("Insira o número de segundos que deseja converter: ");
    scanf("%d", &segundos);
    horas = segundos / 3600;
    minutos = (segundos % 3600) / 60;
    segundos_restantes = segundos % 60;
    printf("A conversão requisitada retornou %d:%d:%d ", horas, minutos, segundos_restantes);
    
    return 0;
}

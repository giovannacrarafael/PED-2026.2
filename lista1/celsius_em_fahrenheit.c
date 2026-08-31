/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    printf("Digite uma temperatura: ");
    int celsius = scanf("%d", &celsius);
    printf("A temperatura convertida em Fahrenheit é de %d.", celsius * 9/5 + 32);

    return 0;
}

/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main() 
{   
    int N;
    
    printf("Digite um número: ");
    scanf("%d", &N);
    
    for (int i = 1; i <= N; i++) {
        printf("%d\n", i);
    }
    
    return 0;
}
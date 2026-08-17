/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main() // não entendi porque tem que colocar & no char operador
{   // tentar fazer depois a repetição para tentar novamente
    float num1, num2;
    char operador;

    printf("                   ***CALCULADORA***\n");
    printf("Digite o primeiro número do cálculo que deseja fazer: ");
    scanf("%f", &num1);
    
    do{ // do while executa a operação primeiro e depois vê a condição
        printf("Digite o operador (+ | - | x | /): ");
        scanf(" %c", &operador); // O espaço antes do % ignora o enter da linha anterior e não salta a linha
        if (operador != '+' && operador != '-' && operador != 'x' && operador != '/'){
        printf("Operador inválido. Digite novamente.\n");}
    } while (operador != '+' && operador != '-' && operador != 'x' && operador != '/');
    
    printf("Digite o segundo número do cálculo que deseja fazer: ");
    scanf("%f", &num2);
    
    if (operador == '+') { //char é aspas simples
        printf("O resultado da soma dos números dados é %.2f", num1 + num2);
    } else if (operador == '-') {
        printf("O resultado da subtração dos números dados é %.2f", num1 - num2);
    } else if (operador == 'x') {
        printf("O resultado da multiplicação dos números dados é %.2f", num1 * num2);
    } else if (operador == '/') {
        if (num2 == 0) {
            printf("Não existe divisão com divisor zero.\n");
          } else {
            printf("O resultado da divisão dos números dados é %.2f", num1 / num2);
        }
    } else {
        printf("Entrada inválida.");
      }
    
    return 0;
}
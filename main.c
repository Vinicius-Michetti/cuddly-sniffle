#include <stdio.h>
#include <stdlib.h>

/*
Escreva uma função que receba como parâmetros 3 números inteiros e retorne o menor
valor. Imprima, na função main, o menor valor retornado
*/

int crescente (int num1, int num2, int num3){

    printf("Digite o numero 1: ");
    scanf("%d", &num1);
    printf("Digite o numero 2: ");
    scanf("%d", &num2);
    printf("Digite o numero 3: ");
    scanf("%d", &num3);

    int temp;

    if (num1 > num2){
        temp = num1;
        num1 = num2;
        num2 = temp;
    }
    if (num1 > num3){
        temp = num1;
        num1 = num3;
        num3 = temp;
    }
    if (num2 > num3){
        temp = num2;
        num2 = num3;
        num2 = temp;
    }
    return num1;
}


int main()
{
    int num1, num2, num3, resultado;

    resultado = crescente(num1, num2, num3);

    printf("O menor numero eh: %d", resultado);
}

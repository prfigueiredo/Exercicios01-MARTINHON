/******************************************************************************
   Faça um programa que receba dois números inteiros, calcule e imprima o resto
   da divisão do primeiro pelo segundo.
*******************************************************************************/


#include <stdio.h>

int main()
{
    int num1, num2, result;
    
    printf("Digite o primeiro numero: ");
    scanf("%d", &num1);
    
    printf("Digite o segundo numero: ");
    scanf("%d", &num2);
    
    result = num1%num2;
    
    printf("O resultado da divisao eh %d", result);
    

    return 0;
}
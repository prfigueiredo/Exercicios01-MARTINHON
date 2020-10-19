/******************************************************************************

 Faça um programa que receba três notas de um aluno, calcule e imprima a média
 aritmética entre essas notas.

*******************************************************************************/

#include <stdio.h>

int main()
{
    float num1, num2, num3, media;
    
    printf("Digite a primeira nota: ");
    scanf("%f", &num1);
    
    printf("Digite a segunda nota: ");
    scanf("%f", &num2);
    
    printf("Digite a terceira nota: ");
    scanf("%f", &num3);
    
    media = (num1 + num2 + num3) / 3;
    
    printf("A media das notas eh %0.1f", media);
    /* OBS: %0.1f é para limitar a saída em 1 casa decimal.  */

    return 0;
}
/******************************************************************************
 Refaça o exercício 3 usando uma média ponderada, onde N1 possui peso 2, N2
 peso 3 e N3 peso 5.
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
    
    media = ((num1*2) + (num2*3) + (num3*5)) / 10;
    
    printf("A media das notas eh %0.1f", media);
    /* OBS: %0.1f é para limitar a saída em 1 casa decimal.  */

    return 0;
}
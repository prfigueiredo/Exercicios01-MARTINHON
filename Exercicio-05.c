/******************************************************************************
 Escreva um programa que calcule o volume de uma esfera de raio R, onde R é
 fornecido pelo usuário.
*******************************************************************************/

#include <stdio.h>
#include <math.h> /* Biblioteca com funções matemática - neste caso usaremos potenciação ou POW() em C - abreviação de power */

int main()
{
    float R, V;
    
    printf("Digite o valor do raio de uma esfera: ");
    scanf("%f", &R);
    
    V = ( (4) * (3.14) * ( pow(R,3) ) ) / 3; /* Representação da fórmula para calcular volume de uma esfera: V = 4 . PI . R³ / 3  */
    
    printf("O volume da esfera eh %0.1f metros cubicos", V); /* OBS: %0.1f é para limitar a saída em 1 casa decimal.  */
    

    return 0;
}
#include <stdio.h>
/*
Faça um programa em C que recebe um inteiro do usuário e calcula seu fatorial.
O fatorial de 'n' é dado por:
n*(n-1)*(n-2)...*3*2*1
e é representado por n!
*/
int main()
{
    int i=1;
    int fat=1, num;
    
    printf("Entre com um num:");
    scanf("%d", &num);
    
    do
    {
        fat = fat * i;
        i++;
    } while (i<=num);
    
    printf("\n Fatorial = %d\n", fat);
    
    return 0;
}
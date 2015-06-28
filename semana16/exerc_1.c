#include <stdio.h>
/*
Crie um programa em C que peça um número inteiro ao usuário, e imprima a seguinte tabela que deve ter o numero de linhas de acordo com o número lido. No exemplo abaixo foi lido o número 4.
1
2 4
3 6 9
4 8 12 16
*/
int main()
{

    int num;
    int i;
    int j;
    
    printf("\n Leia um numero entre 1 e 10:");
    scanf("%d", &num);
    
    for(i = 1; i<= num; i++)
    {
        printf("%d ", i);
        
        for(j=1; j<i; j++)
        {
            printf("%d ", i+(j*i) );
        }
        printf("\n");
    }
    
    return 0;
}

#include <stdio.h>

int main()
{
    int notas[5][2];
    int i, j;
    int media;
    
    for(j=0; j<2; j++)
    {
        for(i=0; i<5; i++)
        {
            printf("\n %d - Entre com a av%d : ", i+1, j+1);
            scanf("%d", &notas[i][j]);
        }
    }
    
    // calcula a media
    for(i=0; i<5; i++)
    {
        //media = (av1 + av2) / 2
        media = (notas[i][0] + notas[i][1])/2;
        if (media>=6)
            printf("\nAluno %d - Passou!!!!\n", i+1);
        else
            printf("\nAluno %d - Fazer AV3!\n", i+1);
    }
    return 0 ;
}
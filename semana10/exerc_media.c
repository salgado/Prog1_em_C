#include <stdio.h>
/*
Faça um programa em C que leia a nota1 e nota2 de um aluno.
Seu programa deve calcular a média e imprimir:
"reprovado", se media <6
"aprovado", caso contrário.
*/

int main()
{
    float nota1;
    float nota2;
    float media;
    
    printf("\nEntre com nota1:");
    scanf ("%f", &nota1);
    
    printf("\nEntre com nota2:");
    scanf ("%f", &nota2);
    
    media = (nota1 + nota2) / 2;
    
    if (media < 6)
    {
       printf("\nReprovado com media = %.2f \n", media);
    }
    else
    {
        printf("\n Aprovado com media = %.2f \n", media );
    }
    
    system("pause");
    
    return 0;
}
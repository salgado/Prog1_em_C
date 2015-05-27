#include <stdio.h>
/*
Faça um programa em C que leia a nota1 e nota 2 de vários alunos.
A leitura permanece até que o usuário pressione 0 para sair de acordo com o exemplo:

*/
int main()
{
    float nota1, nota2;
    float media_aluno, soma_media=0;
    int qtd_alunos=0;
    int resposta=1; // 0 - nao , 1- sim
    
    while(resposta == 1)
    {
      qtd_alunos++;
                   
      printf("\nLeia nota1:");
      scanf("%f", &nota1);
    
      printf("\nLeia nota2:");
      scanf("%f", &nota2);
    
      media_aluno = (nota1 + nota2) / 2;
      //acumular media da turma
      soma_media = soma_media + media_aluno;
    
      printf("\nmedia aluno = %.2f", media_aluno);
    
      printf("\n\nDeseja continuar? (1-Sim/0-Nao)");
      scanf("%d", &resposta);
    }
    
    //imprime resultado
    printf("\n media da turma = %.2f", soma_media/qtd_alunos );
    printf("\n Qtd alunos na turma = %d\n\n", qtd_alunos );
    
    system("pause");
    return 0;
}

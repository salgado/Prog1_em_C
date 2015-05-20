#include <stdio.h>
/*
1- Faça um programa para advinhar um número.
No nosso caso, este número será fixo e igual a 5.
Se o usuário acertar, diga:
 “Você acertou, parabéns” “Game Over!”
Se o usuário digitar um número acima de 5, você deve dizer:
 “Que pena, o número mágico é menor que esse!” “ Game Over!”
Se o usuário digitar um número abaixo de 5, você deve dizer:
 “Que pena, o número mágico é maior que esse!” “ Game Over!”
*/
int main()
{
    int num_magico;
    int num_usuario;
    
    num_magico = 5; //inicializa numero magico com 5
    
    //obter o valor do usuario
    printf("\nAdvinhe o numero:");
    scanf("%d", &num_usuario);
    
    //testa as condicoes para advinhar o numero
    if (num_usuario == num_magico)
    {
       printf("\nVoce acertou! Game Over\n");
    }
    else
    {
        if (num_usuario > num_magico)
        {
           printf("Que pena, o numero magico e MENOR que esse!\nGame Over!\n");    
        }
        else  //eh menor
        {
           printf("Que pena, o numero magico e MAIOR que esse!\nGame Over!\n");    
        }
    }
    
    system("pause");            
    return 0;
}









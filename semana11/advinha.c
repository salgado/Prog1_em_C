#include <stdio.h>
/*
1- Fa�a um programa para advinhar um n�mero.
No nosso caso, este n�mero ser� fixo e igual a 5.
Se o usu�rio acertar, diga:
 �Voc� acertou, parab�ns� �Game Over!�
Se o usu�rio digitar um n�mero acima de 5, voc� deve dizer:
 �Que pena, o n�mero m�gico � menor que esse!� � Game Over!�
Se o usu�rio digitar um n�mero abaixo de 5, voc� deve dizer:
 �Que pena, o n�mero m�gico � maior que esse!� � Game Over!�
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









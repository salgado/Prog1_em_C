#include <stdio.h>

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
        //verifica se esta quente ou frio
        if( (num_usuario>= num_magico-3 ) && (num_usuario <= num_magico+3 ) )
        {
            //esta quente
            printf("Estah quente, mas ...\n");
        }
        else
        {
            //esta frio
            printf("Estah frio, mas ...\n");
            
        }
        
        // verifica se o numer magiv eh MAIOR ou MENOR
        if (num_usuario > num_magico)
        {
           printf("o numero magico e MENOR que esse!\nGame Over!\n");    
        }
        else  //eh menor
        {
           printf("o numero magico e MAIOR que esse!\nGame Over!\n");    
        }
    }
    
    //system("pause");            
    return 0;
}
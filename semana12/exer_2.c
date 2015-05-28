#include <stdio.h>
/*
 Desenhar a tabuada de adição de 5
*/
int main()
{
    int cont, adicao;
    int num;
    
    num = 8;
    
    printf("Tabuada adicao de %d\n", num);
    printf("-------------------\n");
    for(cont=1; cont<=10; cont++)
    {
        adicao = num + cont;
        printf("%d + %d = %d\n",num, cont, adicao);
    }
    
    return 0;
}
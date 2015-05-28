#include <stdio.h>
/*
Fazer um programa em C para exibir os números pares de 0 a 50
*/
int main()
{
    int cont;
    
    printf("[");
    for(cont=0; cont<=10; cont+=2)
    {
        if (cont == 10)
          printf("%d]\n", cont);
        else  
          printf("%d, ", cont);
    }
    
    return 0;
}

#include <stdio.h>
/*
Fazer um programa em C para exibir os números pares de 0 a 50
*/
int main()
{
    int cont;
    
    for(cont=0; cont<=50; cont+=2)
    {
        if (cont == 50)
          printf("%d.", cont);
        else  
          printf("%d, ", cont);
    }
    
    return 0;
}

#include <stdio.h>
/*
Fazer um programa em C para exibir os números pares de 0 a 50
*/
int main()
{
    int cont;
    
    for(cont=0; cont<=50; cont+=2)
    {
        printf("%d, ", cont);
    }
    
    return 0;
}

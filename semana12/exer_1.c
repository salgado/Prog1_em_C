#include <stdio.h>
/*
Calcular o quadrado dos números de 1 a 10
*/
int main()
{
    int cont, quadrado;
    
    for(cont=1; cont<=10; cont++)
    {
        quadrado = cont * cont;
        printf("O quadrado de %d = %d\n", cont, quadrado);
    }
    
    return 0;
}
#include <stdio.h>
/*
Faca um programa ara conar de 1 a 100
*/

int main()
{   
    int valor_max = 100;
    int contador;
    
    contador = 1;
    while(contador <= valor_max)
    {
        printf("contador = %d\n", contador);
        contador = contador + 1;   // contador++
    }
    
    return 0;
}
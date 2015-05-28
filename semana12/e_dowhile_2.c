#include <stdio.h>
/* usando do...while Fazer um programa em C para exibir os números pares de 0 a 50
*/
int main()
{
    int cont;
    
    cont = 0;
    printf("[");
    do
    {
        if (cont == 10)
          printf("%d]\n", cont);
        else  
          printf("%d, ", cont);
          
        cont+=2;
        
    } while(cont<=10);
    
    return 0;
}
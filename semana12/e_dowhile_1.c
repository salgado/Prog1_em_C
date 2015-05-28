#include <stdio.h>
/* usando do...while Fazer um programa em C para exibir os números pares de 0 a 50
*/
int main()
{
    int cont;
    
    cont = 0;
    
    do
    {
        printf("%d, ", cont);
        cont+=2;
        
    } while(cont<=50);
    
    return 0;
}
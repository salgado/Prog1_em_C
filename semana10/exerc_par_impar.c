#include <stdio.h>
/*
Faça um programa em C para ler um número do teclado e 
exibir na tela se este número é par ou ímpar.

(Dica: Um número é par se o resto da divisão dele 
por 2 é igual a 0) Lembra qual o operador de resto de divisão em C ?
*/

int main()
{
    int numero;
    
    //imprime uma mensagem e ler numero
    printf("\nEntre com numero qualquer:");
    scanf ("%d", &numero);
    
    if ( (numero%2)==0)
    {
         printf("\nNumero eh par \n");
    }
    else
    {
        printf("\nNumero eh Impar \n");   
    }

    system("pause");
    return 0;
}
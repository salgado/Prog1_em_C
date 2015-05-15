#include <stdio.h>

/*
Faça um programa em C para ler 2 números inteiros do teclado.
Calcular a soma destes números.
Exibir a soma na tela
*/
int main()
{
    int valor1;
    int valor2;
    int soma;
    
    //Exibe mensagem e le numero do teclado
    printf("\nEntre com valor1 : ");
    scanf("%d", &valor1);
    
    printf("\nEntre com valor2 : ");
    scanf("%d", &valor2);
    
    //calcular soma
    soma = valor1 + valor2;
    
    //imprime o resultado
    printf("\n O Resultado eh= %d \n", soma);
    
    system("pause");
    
    return 0;
    
}
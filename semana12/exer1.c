#include <stdio.h>
/*
Faca um programa em C para exibir os numeros de 1 a 5000
*/
int main()
{
    //declara a variavel vontador
    int contador;
    
    //inicializa variavel
    contador = 1;
    
    while (contador <= 5000)
    {
          printf("\tnumero = %d", contador);
          //contador+=1000;
          contador = contador + 1000;
    }
    
    system("pause");
    
    return 0 ; //fim de programa
}




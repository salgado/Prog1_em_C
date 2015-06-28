#include<stdio.h>
int main()
{ 
    char nome[4];
    int i;
    
    printf("\nQual o seu nome de 4 letras ?\n");
    scanf("%s", nome);
    
    printf("\nOla %s, boa noite!\n", nome);
    
    printf("\nSeu nome invertido eh ");
    
    for(i=3; i>=0; i--)
    {
        printf("%c", nome[i]);
    }
    printf("\n");
    
  return 0;
}
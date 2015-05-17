#include <stdio.h>

int main()
{
    /*
    Ler 3 numers e imprime na rdem crescente
    */
    
    int num1, num2, num3;
    
    printf("\nEntre com num1:");
    scanf("%d", &num1);
    
    printf("\nEntre com num2:");
    scanf("%d", &num2);
    
    printf("\nEntre com num3:");
    scanf("%d", &num3);
    
    //testa todas as hipoteses
    if ((num1<num2) && (num2<num3))
    {
        printf("\n(1) - %d -> %d - > %d\n", num1, num2, num3);
    }
    else if((num1<num3) && (num3<num2))
    {
        printf("\n(2)%d -> %d - > %d\n", num1, num3, num2);
        
    }
    else if((num2<num1) && (num1<num3))
    {
        printf("\n(3)%d -> %d - > %d\n", num2, num1, num3);
        
    }
    else if((num3<num1) && (num1<num2))
    {
        printf("\n(4)%d -> %d - > %d\n", num3, num1, num2);
        
    }
    else if((num2<num3) && (num3<num1))
    {
        printf("\n(5)%d -> %d - > %d\n", num2, num3, num1);
        
    }
    else if((num3<num2) && (num2<num1))
    {
        printf("\n(6)%d -> %d - > %d\n", num3, num2, num1);
        
    }
    
    return 0;
}
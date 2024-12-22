//serie de fibonacci
#include <stdio.h>
#include<stdlib.h>

int main()
{
    system("chcp 65001>null"); //configuração para UTF-8 NO WINDOWS
    int a = 0, b = 1, c, i, t;
    printf("\nDigite o numero de termos: ");
    scanf("%d", &t);
    //t = 8; //modifiquei para o usuário inserir o valor que quiser
    for ( i = 0; i < t; i++)
    {
        c = a + b;
        a = b;
        b = c;
        printf("%d\t",a);
    }
    
    return 0;
}

    

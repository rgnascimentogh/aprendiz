#include<stdio.h>

int main()
{
    printf("\n esse programa calcula o fatorial.")
    float a , n, i,b;
    printf("\nDigite o numero: ");
    scanf("%f",&n);
    a = n;
    b = n - 1;
    for ( i = b; i > 0; i--)
    {
        a *= (n-i);
        //printf("%f,%f,%f\t",a,i,n);
    }
    printf("%f\t",a);
    printf("%f,%f,%f\t",a,i,n);

    return 0;
}

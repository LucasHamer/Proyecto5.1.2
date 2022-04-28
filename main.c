#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,suma=0;

    for(i=100;i>=50;i=i-5)
        suma=suma+i;
    printf("La suma es: %d",suma);

    return 0;
}

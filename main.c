#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numero,numero2,numero3, numero4=30;
    //printf("Numero %i\nNumero2 %i\nNumero3 %d\n", numero, numero2, numero3);

    /*printf("\n\nPor favor, ingresar un numero\n");
    scanf("%i",&numero);*/

    int contador=0;
    while(contador<5)
    {
        printf("contador %i\n", contador);
        contador++;
    }

    for(int i=0;i<10;i++)
    {
        printf("\n\ncontador %i\n", i);
    }

    printf("\nFin...");
    return 0;
}

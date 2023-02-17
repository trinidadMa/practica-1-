//3. escribe un programa en c que calcule el volumen de un prisma rectangular. el programa debe de guiar al usuario paso a paso de manera clara y explicita.
#include<stdio.h>
int main()
{
    float largo,ancho,altura,volumen;

    printf("ingrese el largo del prisma rectangular\n");
    scanf("%f", &largo);

    printf("ingrese el ancho del prisma rectangular\n");
    scanf("%f", &ancho);

    printf("ingrese la altura del prisma rectangular\n");
    scanf("%f", &altura);

    volumen=largo*ancho*altura;

    printf("el volumen del prisma rectangular es %fm^3",volumen);

    return 0;


}

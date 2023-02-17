//4.escribe un programa en c que muestre el perimetro de un pentagono a partir de la medida de uno de sus lados .

#include <stdio.h>
int main()
{
    float lado1,perimetro;
    printf("ingrese el lado del pentagono\n");
    scanf("%f",&lado1);

    perimetro=lado1*5;
    printf("el perimetro del pentagono es %2.f",perimetro);

    return 0;
}

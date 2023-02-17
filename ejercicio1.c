// 1.corrige el siguiente programa para que compile sin errores
#include <stdio.h>
int main ()
{
    int edad, numeroDesuerte;
    printf("escribe tu edad:");
    scanf("%d", &edad);

    printf("escribe tu numero de la suerte:");
    scanf("%d", &numeroDesuerte);

    printf("eres muy joven a tus apenas %d anos.\n",edad);
    printf("el %d es un numero suertudo.\n",numeroDesuerte);

    return 0;
    

}

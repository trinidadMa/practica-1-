//5.escriibe un programa en c que encuentre la medida del tercer lado de un triandulo conociendo 2 de sus lados y el aungulo entre ellos
// el programa debe de guiar el usuario paso a paso de manera clara y explicita.
#include <stdio.h>
#include<math.h>

int main()
{
    float lado1,lado2,angulo,coseno,lado3,PI=3.14;

    printf("inserte la medida del lado 1:\n");
    scanf("%f",&lado1);

    printf("inserte la medida del lado 2:\n");
    scanf("%f",&lado2);

    printf("inserte el angulo que hay entre los dos lados:\n");
    scanf("%f",&angulo);

    coseno=cos(angulo*PI/180);
    lado3=sqrt((pow(lado1,2)+pow(lado2,2))-2*lado1*lado2*coseno);

    printf("la medida del lado 3 es >%.2f",lado3);

    return 0;
}

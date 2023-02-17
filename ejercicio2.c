//2.escribe un programa que convierta la cantidad de grados fahrenheit que escribe un usuario a grados centigrados y muestra el resultado de manera clara 
#include<stdio.h>
int main()
    {
        float fahrenheit,centigrados;

        printf("inserte la cantidad de grados fahrenheit\n");
        scanf("%f",&fahrenheit);

        centigrados=(fahrenheit-32)/1.8;
        printf("\n la cantidad en grados fahrenheit %f en grados centigrados es %.2f",fahrenheit,centigrados);

        return 0;

    }

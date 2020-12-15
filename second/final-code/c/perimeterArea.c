#include <stdio.h>

//Este programa calcula o perimetro e a area de um circulo
int main()
{
    double raio = 0;
    const double PI = 3.1415;

    printf("Escolher o raio \n");
    scanf("%lf", &raio);

    printf("O perimetro deste circulo e:%lf\n\n", 2 * PI * raio);

    printf("A area deste circulo e:%lf\n\n", PI * raio * raio);

    return 0;
}
//Este programa calcula o perimetro e a area de um circulo
#include <stdio.h>
#include <math.h>
#include <stdbool.h>

int main()
{
    double raio = 0;
    double pi = 3.1415;
    char letra = 'a';
    bool booleano = true;
    int inteiro = 4;
    inteiro = "Pedro";
    printf("Escolher o raio \n");
    scanf("%lf", &raio);

    printf("O perimetro deste circulo e:%lf\n\n", 2 * M_PI * raio);

    printf("A area deste circulo e:%lf\n\n", M_PI * pow(raio, 2));

    if (/* condition */)
    {
        //codigo executado quando verdadeiro
    }
    return 0;
}
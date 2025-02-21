#include <stdio.h>

int main(void){
    double raio;
    printf("Indicar o raio da esfera, em metros:");
    scanf("%lf", &raio);
    printf("O volume da esfera sera %.2f metros cubicos.\n",raio*raio*raio*3.14*(4.0/3.0));
}
#include <stdio.h>

int main(void){
        float a,b,x;
    printf("Indicar um intervalo aberto de numeros reais (a espaco b):");
    scanf("%f %f",&a,&b);
    printf("Indicar numero real x que se pretende verificar se pertence ao intervalo entre %.2f e %.2f:",a,b);
    scanf("%f",&x);
    if((x>a&&x<b)||(x<a&&x>b))
        printf("x pertence ao intervalo!\n");
    else if(x==a||x==b)
        printf("x encontra-se mesmo na fronteira do intervalo!\n");
    else
        printf("x nao pertence ao intervalo!\n");

    return 0;
}
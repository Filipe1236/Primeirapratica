#include <stdio.h>

int main(void){
    float iva,precoliquido;
    printf("Indicar o preco liquido:");
    scanf("%f",&precoliquido);
    printf("Indicar o iva (em %%):");
    scanf("%f",&iva);
    printf("O preco bruto foi de %.2f euros!\n",precoliquido/(1+iva/100));
    return 0;
}
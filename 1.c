#include <stdio.h>

int main(void){
    float iva,preco;
    printf("Indicar preco(sem IVA):");
    scanf("%f",&preco);
    printf("Indica percentagem do IVA:");
    scanf("%f",&iva);
    printf("O preco liquido vai ser %.2f euros.\n",preco+((iva/100)*preco)); //preco + (iva/100)*preco=(1+iva/100)*preco
    return 0;
}
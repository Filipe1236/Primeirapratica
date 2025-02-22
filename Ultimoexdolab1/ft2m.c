#include <stdio.h>
//Converter de ft para metros
float ft2m(float ft){
        float m;
    m=0.3048*ft;
    return m;
}

//Converter de metros para ft
float m2ft(float m){
    float ft;
    ft=m/0.3048;
    return ft;
}

int main(void){
        int opcao;
        float valoraconverter,valorconvertido;
    while(opcao<1||opcao>2){
        printf("Converter altitude:\n");
        printf("1 - [ft] para [m]\n");
        printf("2 - [m] para [ft]\n");
        printf("Opcao:");
        scanf("%d",&opcao);
    }
    printf("Altitude a converter:");
    scanf("%f",&valoraconverter);
    if(opcao==1){
        valorconvertido=ft2m(valoraconverter);
        printf("%f [ft] = %f [m]\n",valoraconverter,valorconvertido);
    }
    if(opcao==2){
        valorconvertido=m2ft(valoraconverter);
        printf("%f [m] = %f [ft]\n",valoraconverter,valorconvertido);
    }
}
#include <stdio.h>

int main(void){
        float nota,notafinal,peso,pesofinal;
        notafinal=0;
        pesofinal=0;
        int i=1;
    while (pesofinal<100){
        printf("Nota[%d]:",i);
        scanf("%f",&nota);
        //caso das notas estarem fora do intervalo [0;20]
        if((nota<0) ||(nota>20)){
            printf("As notas vao de 0 a 20!");
            break;
        }

        printf("Peso dessa componente(em percentagem):");
        scanf("%f",&peso);
        pesofinal=pesofinal+peso;
        notafinal=notafinal+nota*(peso/100.0);
        i=i+1;
    }
    if(pesofinal==100)
        printf("A nota final vai ser de %.2f valores!\n",notafinal);
        if(pesofinal>100)
            printf("O peso nao esta para 100 por cento! Esta a ir para alem do limite!\n");
    return 0;
}
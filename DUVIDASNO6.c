#include <stdio.h>

int main(void){
        double horadec,minutodec,segundostotais;
        int hora,minuto,segundo;
    printf("Indicar hora (em decimal):");
    scanf("%lf",&horadec);
        hora=(int) horadec;
        //minutodec=((float) horadec-(int)horadec)*60;
        //minuto=(horadec-hora)*60.0; As operacoes nao se dao bem com multiplicacoes por 60! Ex:horadec=3.6=>minutodec=35.999992
        segundostotais=(horadec-hora)*3600;
        minutodec=segundostotais/60.0;
        minuto=(int)minutodec;
        segundo=(int)segundostotais-(minuto*60);
        //E AINDA ASSIM, DÁ ERRO!



    printf("Isso corresponde a %d horas, %d minutos e %d segundos!\n",hora,minuto,segundo);
    return 0;
}
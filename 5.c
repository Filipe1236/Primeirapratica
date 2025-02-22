#include <stdio.h>

int main(void){
    int hora,minutos,segundos;
    float horadec;
    printf("Hora minuto segundo=");
    scanf("%d %d %d",&hora,&minutos,&segundos);
    printf("São %.3f horas!\n",hora+minutos/60.0+segundos/3600.0);
    return 0;
}
#include <stdio.h>

int main(void){
    int x,y;
    printf("X=");
    scanf("%d",&x);
    printf("Y=");
    scanf("%d",&y);
    //MAIOR OU IGUAL, VERSÃO COMPLICADA (COM O OPERADOR LÓGICO OR "||")
    if(x>y || x==y)
        printf("%d>=%d\n",x,y);
        //caso contrário, dizer só que é menor!
            else
                printf("%d e menor que %d!\n",x,y);
}
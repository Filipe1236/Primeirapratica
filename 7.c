#include <stdio.h>

int main(void){
        int n1,n2,d1,d2;
    printf("numerador1=");
    scanf("%d",&n1);
    printf("denominador1=");
    scanf("%d",&d1);
    printf("numerador2=");
    scanf("%d",&n2);
    printf("denominador2=");
    scanf("%d",&d2);

    printf("%3d   %3d   %3d\n",n1,n2,n1*d2 +n2*d1);
    printf("――― + ――― = ―――\n");
    printf("%3d   %3d   %3d\n",d1,d2,d1*d2);
}
#include <stdio.h>

int main(void){
        float a,b,lado,x,y;
    printf("Indicar coordenadas (a;b) em R2 do vértice no canto inferior esquerdo do quadrado(a espaco b):");
    scanf("%f %f",&a,&b);
    printf("Indicar lado do quadrado:");
    scanf("%f",&lado);
    printf("Indicar coordenadas (x;y) em R2 do ponto que se pretende verificar se pertence ao quadrado:");
    scanf("%f %f",&x,&y);
    //Os parentesis entre as condicoes AND deste primeiro if sao desnecessarios, e so para facilitar que um lado e para verificar o x e o outro o y!
    //condicoes do interior do quadrado:
    if((x>a&&x<(a+lado))&&(y>b&&y<(b+lado)))
        printf("O ponto vai ser interior ao quadrado!\n");
        //condicoes do quadrado, só a linha, para verificar se o ponto é fronteiro:
        else if((x==a||x==(a+lado)&&(y>=b&&y<=(b+lado)))||((y==b||y==b+lado)&&(x>=a&&x<=(a+lado))))
            printf("O ponto vai ser fronteiro ao quadrado!\n");
                else
                    printf("O ponto vai ser exterior ao quadrado!\n");
    return 0;
}
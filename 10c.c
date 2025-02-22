#include <stdio.h>
//funcao auxiliar que calcula a distancia ao quadrado (sem a raiz quadrada) de (x;y) a (a;b)
float distquadrado(float x, float y, float a, float b){
    float resultado;
    resultado=(x-a)*(x-a)+(y-b)*(y-b);
    return resultado;
}

int main(void){
        float a,b,raio,x,y;
    printf("Indicar coordenadas (a;b) em R2 do centro do circulo(a espaco b):");
    scanf("%f %f",&a,&b);
    printf("Indicar raio do circulo:");
    scanf("%f",&raio);
    printf("Indicar coordenadas (x;y) em R2 do ponto que se pretende verificar se pertence ao circulo:");
    scanf("%f %f",&x,&y);
    //condicoes do interior do circulo:
    if(distquadrado(x,y,a,b)<(raio*raio))
        printf("O ponto vai ser interior ao circulo!\n");
        //condicoes do quadrado, só a linha, para verificar se o ponto é fronteiro:
        else if(distquadrado(x,y,a,b)==(raio*raio))
            printf("O ponto vai ser fronteiro ao circulo,ou seja, encontra-se na linha da circunferencia!\n");
                else
                    printf("O ponto vai ser exterior ao circulo!\n");
    return 0;
}
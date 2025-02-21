#include <stdio.h>

int main()
{
    int x;
    int y;

    printf("Escolha dois numeros x e y.\n");
    printf("X = ");
    scanf("%d", &x);
    printf("Y = ");
    scanf("%d", &y);

    if(x >= y){
        printf("%d maior ou igual a %d", x,y);
    }
    else if(x<y){
        printf("%d menor que %d", x, y);
    }

    return 0;
}

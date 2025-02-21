#include <stdio.h>
int main () {
 int i;
 int n1 = 19;
 int n2 = 37;
 int conta =0;
 i = n1;
 while (i < n2)
 {
 printf("numero = %d \t", i);
 printf("conta inicial = %d\t",conta);
 i = i + 1;
 conta=conta+1;
 printf("conta final = %d\n",conta);
 }
 //printf("\n \n A quantidade de numeros e = %d \n",n2-n1);
 printf("\n \n A quantidade de numeros e = %d \n",conta);
 return 0;
}
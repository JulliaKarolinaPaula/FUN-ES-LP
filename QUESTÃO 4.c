/*QUESTÃO 04: Crie uma função capaz de receber 3 números a, b e c e retornar quantos são pares*/
#include <stdio.h>

int pares(int a, int b, int c){
    int cont=0;
    
    if(a%2==0){
        cont++;
    } if(b%2==0){
        cont++;
    } if(c%2==0){
        cont++;
    }
    return(cont);
}
int main(void){
    int a,b,c;

    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);

    int par = pares(a,b,c);

    printf("A quantidade de numeros pares e de: %d\n", par);

    return 0;
}
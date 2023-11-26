/*QUESTÃO 07: Faça uma função capaz de receber 3 números e retornar a soma do maior com o menor 
número.*/
#include <stdio.h>

int soma(int a, int b, int c){
    int maior, menor, ambos;

    if((a>b)&&(a>c)){
        maior = a;
    } else if((b>a)&&(b>c)){
        maior = b;
    } else{
        maior = c;
    }

    if((a<b)&&(a<c)){
        menor = a;
    } else if((b<a)&&(b<c)){
        menor = b;
    } else{
        menor = c;
    }

    ambos = maior+menor;

    return(ambos);
}
int main(void){
    int a,b,c, result;

    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);

    result = soma(a,b,c);

    printf("A soma do maior com o menor e %d", result);
}
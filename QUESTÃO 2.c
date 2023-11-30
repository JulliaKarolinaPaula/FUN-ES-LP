/*QUESTÃO 02:  Crie uma função capaz de receber 2 números x e y, e retornar qual dos dois é maior.*/ 
#include <stdio.h>

int num_maior(int a, int b){
    int maior;

    if(a > b){
        maior = a;
    } else if(a == b){
        printf("Valores Iguais\n");
    } else{
        maior = b;
    }
    return(maior);
}
int main(void){
    int x,y,resultado;
    scanf("%d", &x);
    scanf("%d", &y);

    resultado = num_maior(x,y);

    printf("%d", resultado);

    return 0;
}

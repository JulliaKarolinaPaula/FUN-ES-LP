/*QUESTÃO 11: Faça uma função que receba um número positivo e imprima todos os seus divisores. 
Exemplo: os divisores do número 66 são: 1, 2, 3, 6, 11, 22, 33 e 66.*/
#include <stdio.h>

int divisores(int x){

    for(int i = 1;i <= x;i++){
        if(x%i==0){
            printf("%d\n", i);
        }
    }
    return (0);
}

int main(void){
    int n, div;

    scanf("%d", &n);

    div = divisores(n);

    printf("%d", div);

    return 0;
}
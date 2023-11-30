/*QUESTÃO 11: Faça uma função que receba um número positivo e imprima todos os seus divisores. 
Exemplo: os divisores do número 66 são: 1, 2, 3, 6, 11, 22, 33 e 66.*/
#include <stdio.h>

void divisores(int x){

    for(int i = 1;i <= x;i++){
        if(x%i==0){
            printf("%d\n", i);
        }
    }
}

int main(){
    int n;

    scanf("%d", &n);

    divisores(n);

    return 0;
}

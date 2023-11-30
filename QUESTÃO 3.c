/*QUESTÃO 3: Crie uma função capaz de receber 1 número n qualquer e imprimir todos os números de 1 
a n.*/
#include <stdio.h>

void sequencia(int x){
    for(int i = 1;i <= x;i++){
        printf("%d\n", i);
    }
}

int main(void){
    int n;

    scanf("%d", &n);

    sequencia(n);

    return 0;
}
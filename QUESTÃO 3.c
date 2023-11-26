/*QUESTÃO 3: Crie uma função capaz de receber 1 número n qualquer e imprimir todos os números de 1 
a n.*/
#include <stdio.h>

int sequencia(int x){
    for(int i = 1;i <= x;i++){
        printf("%d\n", i);
    }
    return(x);
}

int main(void){
    int n;

    scanf("%d", &n);

    int cont = sequencia(n);

    return 0;
}
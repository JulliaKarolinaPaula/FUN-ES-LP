/*QUESTÃO 10: Faça uma função capaz de receber dois números a e b, onde o primeiro sempre é menor 
que o segundo, e calcula a soma dos números pares compreendidos entre os dois números lidos*/
#include <stdio.h>

int operacao(int a, int b){
    int soma=0;

    if(a < b){
        for(int i = a;i < b;i++){
            if(i%2==0){
                soma += i;
            }
        }
    } 
    return(soma);
}
int main(){
    int a,b;

    scanf("%d", &a);
    scanf("%d", &b);

    int resultado = operacao(a,b);

    printf("%d\n", resultado);

    return 0;
}
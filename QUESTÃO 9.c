/*QUESTÃO 09: Faça uma função capaz de receber três números a, b e c, e imprimir as duas raízes da equação do segundo grau. Se a função tem apenas uma raiz, imprimir apenas essa raiz. Se não tiver raiz, imprima não existem raízes.*/
#include <stdio.h>
#include <math.h>

void raizes(int a,int b,int c){
    int delta=0, x1=0,x2=0;
    
    delta = (pow(b,2))- 4*a*c;
    x1 = (-b +  (sqrt(delta)))/2*a;
    x2 = (-b - (sqrt(delta)))/2*a; 

    if(delta > 0){
        printf("Possui duas raizes reais: x':%d e x'':%d\n", x1, x2);
    }else if(delta == 0){
        printf("Possui um raiz real: x: %d\n", x1);
    } else{
        printf("Nao possui raizes reais\n");
    }
}
int main(){
    int a,b,c;

    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);

    raizes(a,b,c);

    return 0;
}
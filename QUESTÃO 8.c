/*QUESTÃO 08: . Supondo um empréstimo no valor de 𝑐 Reais, por 𝑚 meses a juros de 𝑡% ao mês, crie 
uma função capaz de descobrir os juros cobrados nesse empréstimo. A fórmula para 
cálculo dos juros simples é a que se segue: 𝑗 = 𝑐 ∗ 𝑚 ∗ 𝑡.*/
#include <stdio.h>

double juros(double c,double m,double t){
    double composto;

    composto = c*m*(t/100);

    return(composto);
}
int main(){
    double c,m,t, simples;

    scanf("%lf", &c);
    scanf("%lf", &m);
    scanf("%lf", &t);

    simples = juros(c,m,t);

    printf("Um emprestimo no valor de R$ %.2lf, por %.0lf meses a juros de %.0lf porcento ao mes, os juros cobrados nesse emprestimo foi de %.2lf", c,m,t,simples);
}
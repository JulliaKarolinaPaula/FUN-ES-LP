/*QUESTÃO 01: Crie uma função capaz de receber 3 números a, b e c, e retornar o delta desses números.*/ 
#include <stdio.h>
#include <math.h>

double delta(double a,double b,double c){
    double delta=0;
    delta = (pow(b,2)) - 4*a*c;
    return(delta);
}
int main(){
    double x=0, y=0, z=0, resultado = 0;
    int n=1;
    
    printf("Insira o %do valor: ",n);
    scanf("%lf", &x);
    n++;
    printf("Insira o %do valor: ",n);
    scanf("%lf", &y);
    n++;
    printf("Insira o %do valor: ",n);
    scanf("%lf", &z);

    resultado = delta(x,y,z);

    printf("O Delta dos valores inseridos e: %.1lf\n", resultado);




    return 0;
}

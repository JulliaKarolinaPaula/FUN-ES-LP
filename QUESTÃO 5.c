/*QUESTÃO 05:  Crie uma função capaz de determinar a soma dos 𝑛 primeiros termos de uma P.A. A soma 
dos 𝑛 primeiros termos de uma P.A. é definida pela fórmula a seguir: 𝑆𝑛 = 𝑛∗(𝑎1+𝑎𝑛)/2. 
É necessário receber o primeiro elemento, o n-ésimo elemento e o valor de n*/
#include <stdio.h>

int pa(int a, int b,int c){
    int p_a;
    for(int i = 0;i < a;i++){
      p_a = a*(b+c)/2;
      printf("%d", p_a);
    }
    return(p_a);
}
int main(){
    int n, a1, an;

    scanf("%d", &n);
    scanf("%d", &a1);
    scanf("%d", &an);

    pa(n,a1,an);

    return 0;
}

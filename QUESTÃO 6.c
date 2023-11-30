/*QUESTÃO 06: Faça uma função capaz de receber dois números b e h que representam os lados de um 
retângulo ou quadrado, e retornar 1 se ele for um quadrado ou 0 se for um retângulo.*/
int confer_lados(int x,int y){
    int lado;

    if(x==y){
        lado = 1;
    } else{
        lado = 0;
    }
    return(lado);
}
int main(){
    int b,h;

    scanf("%d", &b);
    scanf("%d", &h);

    int forma = confer_lados(b,h);

    printf("%d\n", forma);
}

#include <stdio.h>

int main(){

// Número que o usuaria ira digitar para fazer a tabuada
int num;
//Variável que inicia a tabuada em 0(zero) e vai até 10
int contar=0;
// Guarda o resultado da multiplicação da variavel num com a contar
int rs;

printf("Digite um número para fazer a tabuada:\n");
scanf("%d",&num);

while (contar <= 10 ){
    rs = num * contar;
    printf("%d x%d = %d\n ",num,contar,rs);

    contar++;
}
return 0;

}
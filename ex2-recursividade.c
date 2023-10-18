/*crie um programa em Linguagem C que conte os dígitos de um determinado número usando recursão.*/

#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int contagem(int num);
 
int main(){
    int num, contador;
    printf("Digite um numero: ");
    scanf("%d", &num);
    contador = contagem(num);

    printf("%d", contador);
}

int contagem(int num){
    int cont=0;

    if((num/10)==0){
        return 1;
    }
    else{
        return 1 + contagem(num/10);
    }
}

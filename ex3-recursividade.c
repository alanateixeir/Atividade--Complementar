/*Faça uma rotina recursiva em C para encontrar o fatorial de um número.*/

#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int fatorial(int num);

int main(){
    int num;
    printf("Digite um numero para saber seu fatorial: ");
    scanf("%d", &num);
    printf("%d! = %d.", num, fatorial(num));
}

int fatorial(int num){
    int r =0;

    if(num==1){
        return 1;
    } else{
        r = num * fatorial(num-1);
    }
    return r;
}
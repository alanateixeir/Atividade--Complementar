/*Faça uma rotina recursiva para calcular a somatória de todos os número de 1 a N (N será lido do teclado).*/

#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int somatoria(int num);

int main(){
    int num;
    printf("Digite um numero: ");
    scanf("%d", &num);
    printf("%d\n", somatoria(num));
}

int somatoria(int num){
    int r=0;
    
    if(num == 1){
        return r;
    }else{
        r = num + somatoria(num-1);
    }
    return r;

}
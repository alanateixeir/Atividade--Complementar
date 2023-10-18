/*Crie um programa que calcula o máximo divisor comum entre dois números usando a recursão.*/

#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int maxDivisor(int n1, int n2);

int main(){
    int n1, n2;
    printf("Digite dois numeros: ");
    scanf("%d %d", &n1, &n2);
    printf("%d", maxDivisor(n1,n2));
}

int maxDivisor(int n1, int n2){
    int r=0;
    if(n1%n2 == 0){
        return n2;
    } 
    else{
        r = maxDivisor(n2, (n1%n2));
    }
    return r;
}
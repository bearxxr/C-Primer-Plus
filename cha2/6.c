#include<stdio.h>

int main(){

    int toes;
    int toes_2;
    int toes_3;

    toes = 10;
    toes_2 = toes * toes;
    toes_3 = toes * toes_2;

    printf("toes 的数值是 %d toes的平方数值是 %d toes的立方是 %d.\n",toes, toes_2, toes_3);

    return 0;

}
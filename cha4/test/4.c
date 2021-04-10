#include<stdio.h>

int main(){

    float length;
    float length_m;

    printf("请输入你的身高:cm\n");
    scanf("%f", &length);

    length_m = length / 100;
    printf("你的身高是 %f m\n", length_m);

    return 0;

}
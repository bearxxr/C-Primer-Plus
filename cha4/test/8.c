#include<stdio.h>
#define K_M 1.609
#define L_ 3.785

int main(){
    float distance, oil_mass;

    printf("输入你旅行的总英里数: \n");
    scanf("%f", &distance);
    printf("输入你消耗的油量: \n");
    scanf("%f", &oil_mass);

    printf("你每英里消耗的汽油加仑数为 %.1f \n", distance/oil_mass);
    printf("你每英里消耗的汽油加仑数为 %.1f \n", distance * K_M / oil_mass * L_);

    return 0;
}
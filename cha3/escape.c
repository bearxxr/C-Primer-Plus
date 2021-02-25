// 使用转移序列
#include<stdio.h>
int main(){
    float salary;

    printf("\aEnter your desire monthly salary:");
    printf(" $_______________\b\b\b\b\b\b");
    scanf("%f", &salary);
    printf("\n\t$%.2f a month is $%.2f a year.", salary, salary * 12.0);
    printf("\rGee!\n");

    return 0;
}
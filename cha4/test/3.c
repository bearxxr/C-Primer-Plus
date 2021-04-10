#include<stdio.h>

int main(){

    float  f_num;

    printf("请输入一个浮点数:\n");
    scanf("%f", &f_num);

    printf("a. The input is %.1f or %.1e\n", f_num, f_num);
    printf("b. The input is %f or %e\n", f_num, f_num);

    return 0;
}
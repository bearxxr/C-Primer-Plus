#include<stdio.h>
#include<float.h>
#define FLT_DIG __FLT_DIG__
#define DBL_DIG __DBL_DIG__

int main(){
    printf("%d\n", FLT_DIG);
    printf("%d\n", DBL_DIG);

    const float float_num = 1.0/3.0;
    const double double_num = 1.0/3.0;

    printf("输出这些值: %.6f %.6g \n", float_num, double_num);
    printf("输出这些值: %.12f %.12g \n", float_num, double_num);
    printf("输出这些值: %.16f %.16g \n", float_num, double_num);

    return 0;
}
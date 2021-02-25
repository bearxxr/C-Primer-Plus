//计算水分子的质量
#include<stdio.h>
int main(){
    double water;

    printf("请输入水的夸脱数:");
    scanf("%lf",&water);
    printf("转换成质量是:%e\n",water * 950 / 3.0e-23 );

    return 0;
}

//转换品脱数量
#include<stdio.h>
int main(){
    float cup;

    printf("输入杯子数量:");
    scanf("%f", &cup);

    printf("转换成杯数:%f\n",cup / 2);
    printf("转换成盎司:%f\n",cup * 2);

}
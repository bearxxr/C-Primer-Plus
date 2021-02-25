// 输入英寸输出厘米
#include<stdio.h>
int main(){

    float length;
    printf("请输入你的身高英寸值: ");
    scanf("%f",&length);
    printf("你的身高是%fcm\n",length * 2.54);

    return 0;
}

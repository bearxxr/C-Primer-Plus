// 不同形式输出一个浮点数
#include<stdio.h>
int main(){
    float i;
    printf("请你输入一个浮点数:");
    scanf("%f",&i);
    printf("你输入的浮点数是:%f\n",i);
    printf("你输入的小数是:%e\n",i);
    printf("你输入的浮点数是:%a\n",i);

    return 0;
}

//用户输入年龄，然后输入秒数
#include<stdio.h>
int main(){
    int age;	

    printf("请输入你的年龄:");
    scanf("%d",&age);
    printf("你的年龄换算成秒数是:%lf",age * 3.156e+7);

    return 0;
}

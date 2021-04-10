//输出姓名

#include <stdio.h>

int main(){

    char first_name[20];
    char last_name[20];


    printf("请输入你的姓名:\n");
    scanf("%s%s", first_name, last_name);
    printf("你好, %s,%s\n", last_name, first_name);

    return 0;
}
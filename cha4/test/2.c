#include<stdio.h>
#include<string.h>

int main(){
    
    char name[20];
    
    printf("请输入你的姓名:\n");
    scanf("%s", name);

    printf("你的名字是\"%s\"\n", name);
    printf("你的名字是 \"%20s\" \n", name);
    printf("你的名字是 \"%-20s\" \n", name);

    int len_name = strlen(name);
    int width_name = len_name + 3;

    printf("你的名字是 %*s \n", width_name, name);
    // printf("你的名字的长度是 %lu\n", strlen(name));

    return 0;

}
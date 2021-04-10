#include<stdio.h>
#include<string.h>

int main(){
    char first_name[20], last_name[20];

    printf("请先输入您的名字:\n");
    scanf("%s", last_name);
    printf("请输入你的姓式:\n");
    scanf("%s", first_name);

    int first_len, last_len;
    first_len = strlen(first_name);
    last_len = strlen(last_name);


    printf("%s %s\n",first_name, last_name);
    printf("%*d %*d \n",first_len, first_len, last_len, last_len);

    printf("%s %s\n",first_name, last_name);
    printf("%-*d %-*d\n", first_len, first_len, last_len, last_len);

    return 0;
}
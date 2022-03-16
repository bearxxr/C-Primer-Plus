#include<stdio.h>

int main(void){
    int i,j,x;
    printf("请输入一个整数:\n");
    scanf("%d",&i);
    printf("请再输入一个整数:\n");
    scanf("%d",&j);

    for(x=i;x<j;x++){
         printf("%d 平方:%d 立方:%d", x,x*x,x*x*x);
         printf("\n");
    };
    return 0;
}

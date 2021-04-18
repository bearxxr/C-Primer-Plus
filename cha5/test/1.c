//把分钟转化成 小时 + 分钟

#define MIN 60;

#include<stdio.h>

int main(){
    
    int min;
    int hours, mins;
    
    printf("请输入分钟数:\n");
    scanf("%d",&min);
    
    while (min>0){

    hours = min / MIN;
    mins = min % MIN;

    printf("时间是 %d 小时 %d 分钟\n", hours, mins);
    
    
    printf("请输入分钟数:\n");
    scanf("%d",&min);

    }

    return  0;

}


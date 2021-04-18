//把天数转化成 周数 + 天数

#define WEEK 7

#include<stdio.h>

int main(){
    
    int days;
    int week, day;
    
    printf("请输入天数:\n");
    scanf("%d",&days);
    
    while (days>0){

    week = days / WEEK;
    day = days % WEEK;

    printf("日期是 %d 周 %d 天\n", week, day);
    
    
    printf("请输入天数:\n");
    scanf("%d",&days);

    }

    return  0;

}


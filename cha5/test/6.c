#include<stdio.h>

int main(){

    int count=0;
    int sum=0;
    int day;

    printf("请输入你工作的天数:\n");
    scanf("%d", &day);

    while(count++ < day){
	sum = count * count + sum;
    }
	
    printf("你一共挣了%d 元.\n", sum);
    return 0;

}

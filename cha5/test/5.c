#include<stdio.h>

int main(){
   
    int count, sum, day;

    count=0;
    sum=0;
	
    printf("请输入你工作的天数:\n");
    scanf("%d", &day);

    while(count++ < day){
	sum = count + sum;
    }
    	printf("你一共挣了 %d 元\n", sum);
	return 0;
}

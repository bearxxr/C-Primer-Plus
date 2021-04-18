

//输入一个整数，打印比他大10的数

#include<stdio.h>

int main(){

    int i,y;
    printf("请输入一个整数:\n");
    scanf("%d", &i);

    y = i + 10;

    while(i<y){
        ++i;
        printf("%d\n",i);
    }
	
	return 0; 
    }

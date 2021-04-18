#include<stdio.h>

int Temperatures(double n);
int main(){
    
    double hot;

    printf("请输入一个华氏温度:\n");
    scanf("%lf", &hot);

    while(hot != 'q'){
        Temperatures(hot);

    	printf("请输入一个华氏温度:\n");
    	scanf("%lf", &hot);
    }
    	printf("good bye!\n");
	return 0;
}

int Temperatures(double n){
    const double trans_s = 5.0/9.0 * (n - 32);
    printf("摄氏温度是: %1lf\n", trans_s);
    return 0;
}

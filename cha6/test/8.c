#include<stdio.h>

int main(void){
  
    float i,j;
    printf("输入两个浮点数:\n");
    while (scanf("%f %f", &i,&j) == 2){
        printf("这个结果是:%f\n",(i-j)/(i*j));
        printf("输入两个浮点数:\n");
    }
    return 0;
    

}

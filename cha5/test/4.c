//输入cm 转化成 英尺 英寸

#define yingchi 3.3 //乱写的

#include<stdio.h>

int main(){
    
    float high;
    float x,y;

    printf("请输入你的身高 cm.\n");
    scanf("%f", &high);
   
    while(high>0){
    
    x = high / yingchi;
    //y = (double)high % (double)yingchi;

    printf("你的身高 %.1f cm  转化为英尺是 %.1f 英尺. \n", high, x);
    
    printf("请输入你的身高 cm.\n");
    scanf("%f", &high);
    }
	
    printf("bye\n");
    return 0;

}

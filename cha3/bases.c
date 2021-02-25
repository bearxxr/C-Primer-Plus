/* 利用不同的进制答应数字 */
#include<stdio.h>
int main(void){
    int x = 100;
    printf("dec=%d; octal=%o; hex=%x;\n",x,x,x);
    printf("dec=%d; octal=%#o; hex=%#x;\n",x,x,x); //显示前缀0x或0X需要#

    return 0;
}
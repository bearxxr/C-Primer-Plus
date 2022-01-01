// 出口条件循环

#include<stdio.h>
int main(void){
    const int secret_code = 13;
    int entered_code;
    
    printf("To enter the triskaidekaphobia therapy club,\n");
    printf("please enter the secret code number:");
    scanf("%d", &entered_code);
    while (entered_code != secret_code){
        printf("To enter the triskaidekaphobia therapy club,\n");
        printf("please enter the secret code number:");
        scanf("%d", &entered_code);
    }
    printf("Congratulations! You are cured!\n");

    return 0;
}
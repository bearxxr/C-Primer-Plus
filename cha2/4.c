// printf jolly() deny()
#include<stdio.h>

//这是函数原型，告知编译器在程序中要使用该函数
void jolly(void);
void deny(void);

int main(void){
    jolly();
    jolly();
    jolly();
    deny();

    return 0;
}

void jolly(void){
    printf("For he's jolly good fellow!\n");
}

void deny(void){
    printf("Which nobody can deny!\n");
}
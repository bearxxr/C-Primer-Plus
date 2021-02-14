// 还是输出函数
#include<stdio.h>

void br(void);
void ic(void);

int main(){
    br();
    ic();
    printf(",");
    ic();
    printf("\n");
    br();
    return 0;
}

void br(){
    printf("Brazil,Russia\n");
}
void ic(){
    printf("India, China");
}
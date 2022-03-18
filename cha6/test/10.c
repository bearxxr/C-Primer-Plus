#include<stdio.h>

int main(void){
  int i,j;
  printf("请输入两个整数:\n");
  while(scanf("%d %d", &i, &j) == 2){
    for(int x=i;x<j;x++){
      printf("%d 的平方是 %d\n", x, x*x);
    }
    printf("请输入两个整数:\n");
  }
  return 0;

}

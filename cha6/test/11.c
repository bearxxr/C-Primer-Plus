#include<stdio.h>

int main(void){
  int i,j,num[20];
  for(i=0;i<=7;i++){
    scanf("%d", &j);
    num[i] = j;
  }  

  for(i=7;i>=0;i--){
    printf("这个数是 %d\n", num[i]);
  }
  return 0;
}

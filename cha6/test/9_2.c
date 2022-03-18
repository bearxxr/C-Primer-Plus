#include<stdio.h>
float calc(float x, float y);

int main(void){
  float i,j;
  printf("请输入两个浮点数:\n");
  while(scanf("%f %f", &i, &j) == 2){
    printf("这个结果是: %f\n", calc(i,j));
    printf("请输入两个浮点数:\n");
  }
  return 0;
}

float calc(float x, float y){
  return (x-y)/(x*y);
}

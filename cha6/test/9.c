#include<stdio.h>
float avg_two(float x, float y);

int main(void) {
  float i,j,result;
  printf("输入两个浮点数:\n");
  result = avg_two(i,j);
  printf("这个结果是 %f", result);
  return 0;
}

float avg_two(float x, float y)
{
  while (scanf("%f %f", &x, &y) == 2){
    return (x-y)/(x*y);
  }
}

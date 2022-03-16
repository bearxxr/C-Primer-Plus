#include<stdio.h>
#include<string.h>

int main(void){
  char ch[20];
  printf("输入一个单词:\n");
  scanf("%s", ch);

  for(int i=strlen(ch);i>=0;i--){
    printf("%c\n", ch[i]);
  }
  return 0;
}

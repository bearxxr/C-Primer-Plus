#include<stdio.h>

int main(void){
  int i,j;
  char a = 'F';

  for(i=0;i<=6;i++){
          char a = 'F';
          for(j=0;j<i;j++,a--)
        printf("%c", a);
    printf("\n");
  }
  
  return 0;
}

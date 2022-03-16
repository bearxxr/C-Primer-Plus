#include<stdio.h>
int main(void){
  char a = 'A';
  int i,j;

  for(i=0;i<6;i++){
    for(j=0;j<=i;j++,a++)
            printf("%c", a);
            printf("\n");
  }
  return 0;
}

#include<stdio.h>

int main(){
    
    int c=0;
    int x,y;

    x = c++;
    y = x;

    printf("value x = %d, value y = %d, value c = %d.\n", x, y, c);
    
    x = ++c;
    y = c;
    printf("value x = %d, value y = %d.\n", x, y);



    return 0;

}

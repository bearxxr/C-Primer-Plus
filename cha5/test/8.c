#include<stdio.h>

int main(){
    
    int num1, num2;

    printf("This program computes moduli.\n");
    printf("Enter an integer to serve as the second operand:\n");
    scanf("%d", &num1);
    
    while(num1>0){
        printf("Now enter the first operand:\n");
        scanf("%d", &num2);
	
	while(num2>0){
	    int x;
	    x = num1 % num2;

	    printf("%d 求魔 %d is %d.\n",num1, num2, x);
            
	    printf("Now enter the first operand:\n");
            scanf("%d", &num2);
	}

    	    printf("Bye!\n");
    	    return 0;
    }
}

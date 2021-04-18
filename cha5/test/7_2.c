#include<stdio.h>

double cubic(double n);
int main(int argc, char *argv[]){
    double input;
    printf("Enter the double datum to calc cubic :");
    scanf("%lf", &input);

    cubic(input);
    printf("PROGRAM EXIT!\n");
    return 0;
}
    double cubic(double n){
	double t = n * n * n;
	printf("The %1g's cubic is %1g !\n", n, t);
	return t;
    }

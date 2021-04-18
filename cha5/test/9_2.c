#include<stdio.h>

int T(double f);
int main(int argc, char *argv[]){
    double input;
    printf("This program convert fahrenheit to celsius and kelvin. \n");
    printf("Enter a fahrenheit to start : ");

    while(scanf("%lf", &input) == 1){
	T(input);
	printf("Enter next fahrenheit! (q to quit):");

    }
    printf("Done!\n");
    return 0;
}

int T(double f){
    const double F_TO_C = 32.0;
    const double C_TO_K = 273.13;
    double celsius , kelvin;
    celsius = 5.0/9.0*(f - F_TO_C);
    kelvin = celsius + C_TO_K;
    printf("%.2f f, equal %.2f celsius, and %.2f kelvin\n", f, celsius, kelvin);
    return 0;
}

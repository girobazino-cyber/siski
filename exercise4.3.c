#include <stdio.h>
int main(void){
    double a = 0.00;
    printf("Введите число: ");
    scanf("%lf", &a);
    printf("Введено число %f или %e .", a, a);
}
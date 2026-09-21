#include <stdio.h>
int main(void){
    double water_in_quart;
    double water = 950.0;
    double molekula = 3.0e-23;
    double result;
    double molekula_result;

    printf("Укажите объем воды в квартах: ");

    scanf("%lf", &water_in_quart);

    result = water_in_quart * water;
    molekula_result= result / molekula;

    printf("Количество молекул воды в этом объеме = %eэкспоненциально или %f\n", molekula_result, molekula_result);

    return 0;
}
#include <stdio.h>
int main(void){
    float inch = 2.54;
    float height_inch;
    float height_sant;
    printf("Введите рост в дюймах: ");
    scanf("%f",&height_inch);
    height_sant = height_inch * inch;
    printf("Ваш рост в сантиметрах: %.2f\n", height_sant);
    return 0;

}
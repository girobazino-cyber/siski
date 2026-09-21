#include <stdio.h>
int main(void){
    int age;
    double age_in_second;
    printf("Укажите ваш возраст: ");
    scanf("%d", &age);
    age_in_second = age * 3.156e7;
    printf("Ваш возраст в секундах: %e\n", age_in_second);
    return 0;     
}
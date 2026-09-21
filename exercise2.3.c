#include <stdio.h>
int main(void){
    int ch;

    printf("Введите любое число: \n");

    scanf("%d", &ch);       //пользователь вводит число

    printf("Код числа %d равен %c.\n", ch, ch);
    
    return 0;
}
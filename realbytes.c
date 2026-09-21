/*realbytes.c - программа, которая показывает реальное кол-во байт и бит разных типов данных. */
#include <stdio.h>
int main(void){
    float dvd = 1111.00;
    printf("Размер int: %zu байт (%zu бит)\n", sizeof(int), sizeof(int) * 8);
    printf("Размер unsigned int: %zu байт (%zu бит)\n", sizeof(unsigned int), sizeof(unsigned int) * 8);
    printf("Размер char: %zu байт (%zu бит)\n", sizeof(char), sizeof(char) * 8);
    printf("Размер float: %zu байт (%zu бит)\n", sizeof(float), sizeof(float) * 8);
    printf("Размер double: %zu байт (%zu бит)\n", sizeof(double), sizeof(double) * 8);
    printf("Размер long: %zu байт (%zu бит)\n", sizeof(long), sizeof(long) * 8);
    printf("Размер long long: %zu байт (%zu бит)\n", sizeof(long long), sizeof(long long) * 8);
     printf("Размер short: %zu байт (%zu бит)\n", sizeof(short), sizeof(short) * 8);
    
    return 0;
}
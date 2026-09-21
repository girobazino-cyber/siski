#include <stdio.h>
int main(void){
    int a = 123456789012345123;
    long long b = 123456789012345123;
    float c = 17.1234567890;
    double d = 17.1234567890;
    printf("%d %lld %.10f %.10f \n",a, b, c, d);
    return 0;
}


#include <stdio.h>
int main(void){
    int n_1, n_2, n_3;
    n_1 = 5;
    n_2 = n_1 * n_1;
    n_3 = n_2 * n_1;
    printf("n_1 = %d, n_1 в квадрате = %d, n_1 в кубе = %d.\n",n_1,n_2,n_3);
    return 0;
}
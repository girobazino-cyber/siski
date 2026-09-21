#include <stdio.h>
void one_three(void);
void two(void);
int main(void){
    printf("начать сейчас:\n");
    one_three();
    printf("порядок!\n");

return 0;
}
void one_three(void){
    printf("один\n");
    two();
    printf("три\n");
}
void two(void){
    printf("два\n");

}
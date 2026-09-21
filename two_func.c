//это программа,использующая 2 функции в одном файле
#include <stdio.h>
void butler(void);
int main(void){
    printf("Я вызываю дворецкого!\n");
    butler();
    printf("Да.Принесите мне чай и записываемые компакт-диски, \n");
    return 0;
}
void butler(void){
    printf("Вы звонили,сэр?\n");
}
#include <stdio.h>
#include <string.h>     // предоставляет прототип strlenf()
#define PRAISE "Какое прекрасное имя!"

int main(void){
    char name[100000000];
    printf("Как вас зовут?\n");
    scanf("%s", name);
    printf("Здравствуйте, %s. %s\n", name, PRAISE);
    printf("Ваше имя состоит из %zu символов и занимает %zu ячеек памяти\n", strlen(name), sizeof name);
    printf("Хвалебная фраза содержит %zu символов ", strlen(PRAISE));
    printf("и занимает %zu ячеек памяти.\n",sizeof PRAISE);
    return 0;
}

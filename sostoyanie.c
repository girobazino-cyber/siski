#include <stdio.h>
int main(void)
{
    int a, b;
    a = 5;
    b = 2;  /* строка 7 */
    b = a;  /* строка 8 */
    a = b;  /* строка 9 */
    printf("%d %d\n", b, a);
    return 0;   
}                                       


#include <stdio.h>

int suma(int a,int b) {
    return a+b;
}
int roznica(int a,int b) {
    return a-b;
}
int main(void)
{
    printf("%d + %d = %d\n",3,2,suma(3,2));
    printf("%d - %d = %d\n",3,2,roznica(3,2));
    return 0;
}

#include <stdio.h>

int policz(int a,int b) {
    return a+b;
}
int main(void)
{
    printf("%d + %d = %d\n",2,3,policz(2,3));
    return 0;
}

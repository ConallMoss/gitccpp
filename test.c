#include <stdio.h>

int f(int a,int b,int c)
{
if(a)
return c;
return a+b;
}

int main(void){
    int x = 2;
    int y = 3;
    {int temp = x; x = y; y = temp;}
    printf(x);
    return 0;
}
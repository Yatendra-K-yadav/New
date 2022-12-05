#include <stdio.h>
int funct();
int main()
{
    int b = 2;
    int a = funct(b);

    printf("%d", a);
}

int funct(int b)
{

    return b;
}
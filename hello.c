#include <stdio.h>
void swappped(int *x,int *y)
{
    int t=*x;
    *x=*y;
    *y=t;
}

void addition(int x,int y)
{
    printf("%d",x+y);
}

void factorial(int num)
{
    int factorial=1;
    while(num>=1)
    {
        factorial=factorial*num;
        num--;
    }
}

int sub(int x,int y)
{
    return x-y;
}

int div(int x,int y)
{
    return x/y;
}

int mod(int x,int y)
{
    return x%y;
}

int div2(int x)
{
    return x/2;
}
//hello
//hi
void square_square(int x)
{
    printf("%d", x*x);
}

int main()
{
    char str[100];
    scanf("%s",str);
    printf("hello world\n");
    printf("for second commit");
    printf("checking pull");
    printf("conflict occured");
    return 0;
}

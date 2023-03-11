#include <stdio.h>
void swap(int *x,int *y)
{
    int t=*x;
    *x=*y;
    *y=t;
}

int add(int x.int y)
{
    return x+y;
}

void factorial(int num)
{
    int fact=1;
    while(num>=1)
    {
        fact=fact*num;
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
//hi
int square(int x)
{
    return x*x;
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

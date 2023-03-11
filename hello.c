#include <stdio.h>
void swap(int *x,int *y)
{
    int t=*x;
    *x=*y;
    *y=t;
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

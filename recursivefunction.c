#include <stdio.h>
#include <stdlib.h>

int fib(int);

int main()
{
    int x;
    printf("bir sayi giriniz : ");
    scanf("%d",&x);
    printf("%d",fib(x));
}

int fib(int n)
{
    if(n==0 || n==1)
        return 1;
    return fib(n-1)+fib(n-2);
}

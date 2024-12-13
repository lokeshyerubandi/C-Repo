#include<stdio.h>
unsigned long long factorial ( int n)
{
    if (n==0||n==1)
        return 1;
    else
        return n*factorial(n-1);
}
int main()
{
    int num;
    scanf("%d",&num);
    if (num<0)
    {
        printf(".");
    }
    else 
    {
        printf("%llu",factorial(num));
    }
}
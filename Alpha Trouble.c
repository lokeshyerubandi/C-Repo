#include<stdio.h>
int main()
{
    char ch,c;
    scanf("%c",&ch);
    if (ch>='A' && ch<='Z')
    {
    printf("%d",ch-'A'+1);
    }
    else 
    {
        printf("%d",ch-'a'+1);
    }
}
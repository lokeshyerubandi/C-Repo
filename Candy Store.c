    #include<stdio.h>
    int main()
    {
        int x,y;
        int totalearning;
        scanf("%d %d",&x,&y);
        if (y<=x)
        {
            totalearning=y;
        }
        else 
        {
            totalearning=x+(y-x)*2;
        }
        printf("%d",totalearning);
    }
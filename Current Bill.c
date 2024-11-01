#include<stdio.h>
int main()
{
    int units;
    float billamount,surcharge;
    scanf("%d",&units);
    if (units <= 199)
    {
        billamount=units*1.20;
    }
    else if (units>=200&&units<400)
    {
        billamount=units*1.50;
    }
    else if (units>=400&&units<600)
    {
        billamount=units*1.80;
    }
    else 
    {
        billamount=units*2.00;
    }
    if (billamount>400)
    {
        surcharge=billamount*0.15;
        billamount += surcharge;
    }
    else 
    {
        billamount+=100;
    }
    printf("%.2f",billamount);
}
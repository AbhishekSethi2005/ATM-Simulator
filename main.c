#include<stdio.h>
int main()
{   
    int pin,pin1=999;
    int cash,cash1=12000;

    printf("Enter your PIN:");
    scanf("%d",&pin);

    if(pin==pin1) 
    {
        printf("Please enter the amount to withdraw:");
        scanf("%d",&cash);

        if(cash>cash1)
        {
            printf("The amount is not available.");
        }
        else
        {
            cash1=cash1-cash;
            printf("The remaining balance is : %d",cash1);
        }
    }
    else
    {
        printf("The pin is incorrect");
    } 





}


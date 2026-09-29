#include<stdio.h>
int main()
{
    int network , weekend_status , bonus;
    printf("ENTER YOYR NETWORK => 1(Jazz) , 2(Telenor) , 3(Ufone) : ");
    scanf("%d",&network);

    printf("ENTER WEEKEND STATUS => 1(Weekend) , 0(Weekday) : ");
    scanf("%d",&weekend_status);

    float mobile_load;
    printf("ENTER MOBILE LOAD : ");
    scanf("%f",&mobile_load);

    if (mobile_load < 100)
    {
        // bonus = 0;
        printf("no bonus");
    }
    
    else if (mobile_load > 100 && mobile_load < 499) 
    {
        if (weekend_status == 1)
        {
            if (network != 3)
            {
                // bonus = 0.1;
                printf("0.1");
            }
            else
            {
            // bonus = 0.05;
            printf("0.05");
            }
        }

            
    }

    else if (mobile_load >= 500)
    {
        if (network == 1 || weekend_status == 1)
        {
            // bonus = 0.2;
            printf("0.2");
        }
        else
        {
            // bonus = 0.12;
            printf("0.12");
        }
    }
   
    return 0 ;
}
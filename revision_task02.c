#include<stdio.h>
int main()
{
    float total_bill , total;
    printf("ENTER TOTAL BILL :");
    scanf("%f", &total_bill);

    int membership;
    printf(" YOUR ARE MEBER ? ENTER 1(MEMBER) && 0(NON-MEMBER) :");
    scanf("%d", &membership);


    float discount;

    if (total_bill < 500)
    {
        discount = 0 ;
    }
    
    else if (total_bill > 500 && total_bill < 1999)
    {
        if (membership == 1)
        {
            discount = 0.1 ;
        }
        
        else
        {
            discount = 0.05 ;
        }
    }
    
    else if (total_bill > 2000)
    {
        if (membership == 1)
        {
            discount = 0.15 ;
        }
        
        else
        {
            discount = 0.08 ;
        }
    }
   total = total_bill - (discount*total_bill) ;
   printf("THE TOTAL BILL IS : %f",total);
    return 0;
}






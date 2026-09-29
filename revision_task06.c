#include<stdio.h>
int main()
{
    int no_of_overdue , book_type , membership , cost , cost_price_per_day  ;
    float discount , after_any_discount;
    printf("ENTER NUMBER OF DUE DATE : ");
    scanf("%d",&no_of_overdue);

    printf("ENTER THE BOOK TYPE => 1(Regular books) , 2(Reference books) , 3(Rare books): ");
    scanf("%d",&book_type);

    printf("ENTER THE PRIORITY MEMBERSHIP => 1(member -- yes) , 0(member -- no):");
    scanf("%d",&membership);

    if (book_type == 1)
    {
        if (no_of_overdue <= 7)
        {
            cost = 5 ;
        }

        else
        {
            cost = 10;
        }
    }

    else if (book_type == 2)
    {
        cost = 15;
    }

    else if (book_type == 3)
    {
        if (no_of_overdue < 10)
        {
            cost = 30;
            printf("30\n");
        }

        else
        {
            printf("Banned from Borrowing\n");
        }
    }

    cost_price_per_day = no_of_overdue * cost ;

    if (membership == 1 && book_type != 3)
    {
        discount = 0.2;
    }
    else
    {
        discount = 0;
    }

    after_any_discount = cost_price_per_day - (discount * cost_price_per_day) ;

    printf("total cost price per day = %d",cost_price_per_day);
    printf("\nx = %.2f",after_any_discount);
    return 0;
}
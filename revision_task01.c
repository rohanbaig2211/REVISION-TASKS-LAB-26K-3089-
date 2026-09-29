#include<stdio.h>
int main()
{
    float distance;
    printf("ENTER DISTANCE TRAVELED IN KILOMETER :  ");
    scanf("%f",&distance);

    int hour_of_the_day;
    printf("ENTER TOTAL HOUR OF THE DAY : ");
    scanf("%d", &hour_of_the_day);

    float base_price ;
 
        distance = distance - 1 ;
         
        base_price = (distance * 22) + 50 ;

        if (distance <= 0)
        {
            printf("INVALID DISTANCE");
        
        }
        
        else if (hour_of_the_day < 6 || hour_of_the_day > 22)
        {
            base_price = base_price + 40 ;
        }
        else
        {
            base_price = base_price + 0 ;
        }
        
        printf("the total fare is %.2f",base_price);
        return 0 ;
}


#include<stdio.h>
int main()
{
    int meal_category , customer_type , fast_food , desi_food , chinese ;
    float  bill_amount , discount ,  service_charge ;

    printf("ENTER MEAL CATEGORY => 1(fast food) , 2 (desi food) , 3(chinese) : ");
    scanf("%d", &meal_category);

    printf("ENTER CUSTOMER TYPE => 1(student) , 2(regular) : ");
    scanf("%d", &customer_type);

    printf("ENTER BILL AMOUNT : ");
    scanf("%f", &bill_amount);
    
    switch (meal_category)
    {
    case 1:
      service_charge = 0.05 ;   // fast_food 
        break;
    
    case 2:
        service_charge = 0.08 ;   //desi_food 
        break;
    case 3:
        service_charge = 0.1 ;   //chinese 
        break;

    default:
       printf("invalid");
        break;
    }
    
    
    if (bill_amount > 1000)
    {
        if (customer_type == 1)
        {
            discount = 0.15 ;
        }
        else
        {
            discount = 0.1;
        }
    }
    else if (bill_amount < 1000)
    {
        if (customer_type == 1)
        {
            discount = 0.05 ;
        }
        else
        {
            discount = 0;
        }
    }
    
    bill_amount = bill_amount +  (service_charge * bill_amount) - (discount * bill_amount);
    printf("FINAL PAYABLE AMOUNT : %.2f",bill_amount);

    return 0 ;
}
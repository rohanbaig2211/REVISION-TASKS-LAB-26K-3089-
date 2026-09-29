#include<stdio.h>
int main()
{
    int  tank_cap , curr_water ;
    float motor_fill_rate , time, bill;   // motor fill rate per min

    printf("ENTER TANK CAPACITY : " );
    scanf("%d",&tank_cap);

    printf("ENTER CURRENT WATER CAPACITY : " );
    scanf("%d",&curr_water);

    printf("ENTER MOTOR FILL RATE PER MIN : ");
    scanf("%f",&motor_fill_rate);

if (curr_water >= tank_cap)
{
    printf("TANK ALREADY FULL");
}

time = (tank_cap - curr_water)/motor_fill_rate;
int rem = (int)time;
if (time > rem)
{
    rem = rem + 1 ;
}

bill = rem * 3.50;

printf("\nTHE Time to fill the tank %.2f:",time);
printf("\nTHE ELECTRICITY BILL COST IS %.2f:",bill);

    return 0 ;
}

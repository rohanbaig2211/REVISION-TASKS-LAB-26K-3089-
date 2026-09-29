#include<stdio.h>
int main()
{
    float batting_average ;
    int matches_played , fitness_status ;

    printf("ENTER BATTING AVERAGE : ");
    scanf("%f", &batting_average);

    printf("ENTER MATHSEC PLAYED : ");
    scanf("%d", &matches_played);

    printf("ENTER FITNESS STATUS => 1(failed) , 0(passed) : ");
    scanf("%d", &fitness_status);

    if (fitness_status == 0)
    {
        if ((batting_average >= 35 && matches_played >= 10) || ((batting_average > 25 && batting_average < 34.99) && matches_played >= 10))
        {
            printf("Experience Quota");
        }

        else if (matches_played < 5)
        {
            printf("Rejected -> Insufficient Matches");
        }
        
        else
        {
            printf("Rejected");
        }
    }

    else if(fitness_status == 1)
    {
        printf("Rejected -> Fitness");
    }

   else
    {
        printf("Invalid -> Terminated");
    }

    return 0 ;
}
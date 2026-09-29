#include<stdio.h>
int main()
{
    int obt_marks ;
    printf("ENTER OBTAINED MARKS :");
    scanf("%d",&obt_marks);

    if (obt_marks < 0 ||obt_marks > 100 )
    {
        printf("INVALID MARKS ");
    }
    
    else if (obt_marks > 0 || obt_marks < 100)
    {
        if (obt_marks >= 90 && obt_marks < 100)
        {
            printf("GRADE = A+");
        }

        else if (obt_marks >= 80 && obt_marks < 89)
        {
            printf("GRADE =A");
        }

        else if (obt_marks >= 70 && obt_marks < 79)
        {
            printf("GRADE = B");
        }

        else if (obt_marks >= 60 && obt_marks < 69)
        {
            printf("GRADE = C");
        }

        else if (obt_marks >= 50 && obt_marks < 59)
        {
            printf("GRADE = D");
        }

        else if (obt_marks < 50 )
        {
            printf("GRADE = F");
        }
    }

    if (obt_marks < 50)
    {
        printf("\nYOU ARE 'FAIL'");
    }

    else
    {
        printf("\nYOU ARE 'PASS'");
    }
    
    return 0;
}
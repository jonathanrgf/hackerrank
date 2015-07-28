#include <stdio.h>
#include <stdlib.h>

int main()
{
    // declare variables for actual date, expected date, and fine due.
    int actual_d, actual_m, actual_y;
    int expected_d, expected_m, expected_y;
    int fine = 0;
    int diff = 0;

    do
    {
        scanf("%i %i %i", &actual_d, &actual_m, &actual_y);
        scanf("%i %i %i", &expected_d, &expected_m, &expected_y);

    }
    while( actual_d < 1 || expected_d < 1 || actual_d > 31 || expected_d > 31 ||
           actual_m < 1 || expected_m < 1 || actual_m > 12 || expected_m > 12 ||
           actual_y < 1 || expected_y < 1 || actual_y > 3000 || actual_y > 3000);
    //printf("variables stored\n Fine: %i", fine);//TESTLINE
    if ( actual_y == expected_y )
    {
        if (actual_m == expected_m)
        {
            if (actual_d <= expected_d)
            {
                printf("%i", fine);
            }
            else if ( actual_d > expected_d)
            {
                diff = actual_d - expected_d;
                fine = 15 * diff;
                printf("%i", fine);
            }
        }
        else if( actual_m < expected_m)
        {
            printf("%i", fine);
        }
        else if( actual_m > expected_m)
        {
            diff = actual_m - expected_m;
            fine = 500 * diff;
            printf("%i", fine);
        }
    }
    else if( actual_y < expected_y)
    {
        printf("%i", fine);
    }
    else if( actual_y > expected_y)
    {
        fine = 10000;
        printf("%i", fine);
    }


    return 0;
}

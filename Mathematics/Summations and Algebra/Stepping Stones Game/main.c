#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <ctype.h>

int main()
{
    // declare integer for the number of inputs
    int t;
    do
    {
        scanf("%i", &t);
    }
    while( t < 1 || t > pow(10, 5));

    // declare long double for the number of moves with for big numbers
    long double moves;

    // declare the array to store the inputs
    long long int n[t];
    for ( int i = 0; i < t; i++)
    {
        do
        {
            scanf("%lli", &n[i]);

        }
        while( n[i] < 1 || n[i] > pow(10, 18) );



    }

    // for loop to print out  outputs
    for ( int j = 0; j < t; j++)
    {

        // find the number of moves using formula (quadratic formula)
        moves = ((-1) + pow(((1) + ((-4)*(1)*((-2)*(n[j])))), 0.5)) / (2);

        // declare variable to check if moves have decimal places (not '0')
        float check = moves - (int)moves;

        // check if the number of moves is a whole number
        // if it is a whole number print out the number of moves left
        if ( check == 0)
        {
            printf("Go On Bob %lld\n", (long long int)moves);
        }
        // if is not a whole number "better luck next time"
        else if ( check != 0)
        {
            printf("Better Luck Next Time\n");
        }
    }



    return 0;
}

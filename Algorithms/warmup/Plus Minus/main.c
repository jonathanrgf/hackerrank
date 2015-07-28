/*PROBLEM: You're given an array containing integer values.
You need to print the fraction of count of positive numbers,
negative numbers and zeroes to the total numbers.
Print the value of the fractions correct to 3 decimal places.*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    do
    {
        scanf("%i", &n);
    }
    while( n < 1 || n > 100);

    int a[n];

    for ( int i = 1; i <= n; i++)
    {
        scanf("%i", &a[i]);
    }
//TEST PRINT ARRAY
//    for ( int i = 1; i <= n; i++)
//    {
//        printf("%i", a[i]);
//    }

    int positives = 0;
    int negatives = 0;
    int zeros = 0;
    for ( int i = 1; i <= n; i++)
    {
        if (a[i] > 0)
            positives++;

        if (a[i] < 0)
            negatives++;

        if (a[i] == 0)
            zeros++;
    }
//TEST printf to see number of numbers
//    printf("positives: %i   ", positives);
//    printf("negatives: %i   ", negatives);
//    printf("zeros: %i",zeros);

float positive_frac = positives / (float)n;
float negative_frac = negatives / (float)n;
float zero_frac = zeros / (float)n;

printf("%.3f\n", positive_frac);
printf("%.3f\n", negative_frac);
printf("%.3f", zero_frac);


    return 0;
}

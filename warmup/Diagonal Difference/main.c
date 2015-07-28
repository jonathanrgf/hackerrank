/*  Problem: You are given a square matrix of size N×N.
    Calculate the absolute difference of the sums across the two main diagonals. */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    // get size of matrix from user
    int n = 0;
    do
    {
        scanf("%i", &n);
    }
    while(n < 1 || n > 100);

    // create multidimensional array
    int a[n][n];

    // make multidimensional dynamic Array
    for (int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            scanf("%i", &a[i][j]);
        }
    }
    // TEST CODE TO PRINT CONTENT OF ARRAY
//    for (int i = 0; i < n; i++)
//    {
//        for(int j = 0; j < n; j++)
//        {
//            printf("%i", a[i][j]);
//        }
//        printf("\n");
//    }

    // get sum of first diagonal
    int sum1 = 0;
    for(int i = 0; i < n; i++)
    {
        sum1 = sum1 + a[i][i];
    }
    //printf("sum 1 is: %i\n", sum1);//TEST LINE OF FIRST SUM

    // get the sum of the second diagonal
    int sum2 = 0;
    int k = 0;
    for (int j = (n-1); j >= 0; j--)
    {

            sum2 = sum2 + a[j][k];
            k++;
    }
    //printf("Sum 2 is: %i", sum2);//TEST LINE OF SECUND SUM

    // calculate the absolute difference
    int abs_diff = abs(sum1 - sum2);

    //print the result
    printf("%i", abs_diff);


    return 0;
}

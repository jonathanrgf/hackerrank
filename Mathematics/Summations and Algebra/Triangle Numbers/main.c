    #include <stdio.h>
    #include <stdlib.h>

    int main()
    {
        // declare varibale t for the number of test cases
        int t;


        // prompt user for the number of test cases as long as t is between 1 and 100 inclusive
        do
        {
            scanf("%i", &t);
        }
        while( t < 1 || t > 100);

        // declare array for test to store test cases (using long int for test big test cases)
        long int cases[t];

        // for loop to store test cases in an array
        for ( int i = 0; i < t; i++)
        {
            do
            {
                scanf("%li", &cases[i]);
            }
            while( cases[i] < 3 || cases[i] > 1000000000);
        }

        // for loop to check the cases
        for ( int j = 0; j < t; j++)
        {

            // if test case is odd
            if ( cases[j] % 2 != 0)
            {
                printf("2\n");
            }

            // if test case is even
            else if ( cases[j] % 2 == 0)
            {
                // declare check variable to store check
                double check = (double)cases [j] / 4;//TESTLINE
                double check2 = check - (int)check;//TESTLINE
    //            printf("%f\n", check);
    //            printf("%f\n", check2);

                if ( check2 == 0)
                {
                    printf("3\n");
                }

                else if ( check2 != 0)
                {
                    printf("4\n");
                }
            }



        }



        return 0;
    }


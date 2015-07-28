#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// Prototype of Funciont
int summation ( int x );


int main()
{
    // t is number of times to play
    // n is the desire block
    int t, n;
    int turns = -1;

    do
        {
            scanf("%i\n%i", &t, &n);
        }
    while ( (1 > t || t > (pow(10,5))) || (1 > n || n > (pow(10,18))) );
   // printf("%i", summation(t));//TEST LINE

    for ( int i = 0; i <= pow(10,5); i++)
    {
          if (summation(i) == n)
          {
              //printf("i=%i\n", i);//TEST LINE
              //printf("result exist");//TEST LINE
              turns = i - t;
              printf("Go On Bob %i", i);
              break;
          }
          // printf("%i", summation(i));//TEST LINE
    }
    //printf("%i", turns);//TEST LINE
    if (turns == -1)
    {
        printf("Better Luck Next Time");
    }




return 0;
}

int summation ( int x)
{
    if (x != 0)
    {
        return x+summation(x-1); // recursive call
    }
    else
        return x;

}

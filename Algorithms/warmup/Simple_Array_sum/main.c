#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    // test cases t
    int t;
    do
    {
        scanf("%i", &t);
    }
    while(t < 1 || t > 1000);



    int num_arr[t];

    int sum = 0;

    for(int i = 0; i < t; i++)
    {
        scanf("%i", &num_arr[i]);

        sum = sum + num_arr[i];
    }

    printf("%i", sum);
    return 0;
}

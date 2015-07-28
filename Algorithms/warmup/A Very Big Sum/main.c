#include <stdio.h>
#include <stdlib.h>

long long int sum_array(long long int a[], long long int elements);

int main()
{
    int n;

    scanf("%i", &n);
    long long int a[n];

    for (int i = 1; i <= n; i++)
    {
        scanf("%lli", &a[i]);


       // printf("%i", a[i]);//TEST LINE
    }

    long long int sum = sum_array(a, n);
    printf("%lli", sum);

    return 0;
}

long long int sum_array(long long int a[], long long int elements)
{
    long long int sum = 0;
    for (int i = 1; i <= elements; i++)
    {
        sum = sum + a[i];
    }
    return(sum);
}




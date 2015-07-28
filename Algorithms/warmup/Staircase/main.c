#include <stdio.h>
#include <stdlib.h>

int main()
{
    int height;
    do
    {
        scanf("%i", &height);
    }
    while(height < 1 || height > 100);

    for (int x = 0; x < height; x++)
    {



        for (int i = x+1; i < height; i++)
        {
            printf(" ");
        }
        for (int j = 0; j <= x ; j++)
        {
            printf("#");
        }

    printf("\n");
    }

    return 0;
}

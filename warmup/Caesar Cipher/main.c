#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main()
{
    int s_length, k;

    do
    {
        scanf("%i", &s_length);
    }
    while( s_length < 1 || s_length > 100);

    char s[s_length];

    scanf("%s", s);
    do
    {
        scanf("%i", &k);
    }
    while ( k < 0 || k > 100);
    //printf("%s", s);//TEST LINE

    int new_k = k % 26;

    for ( int i = 0; i < s_length; i++)
    {
        if ( isalpha(s[i]) )
        {
            if ( isupper(s[i]))
            {
                int new_char = (((s[i] - 65) + new_k) % 26) + 65;
                printf("%c", new_char);
            }
            if ( islower(s[i]))
            {
                int new_char = (((s[i] - 97) + new_k) % 26) + 97;
                printf("%c", new_char);
            }
        }
        if ( isalpha(s[i]) == 0)
        {
            printf("%c", s[i]);
        }
    }

    return 0;
}

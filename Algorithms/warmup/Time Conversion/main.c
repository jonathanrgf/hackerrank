#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int hours, minutes, seconds;
    char period[2] = "";
    do
    {
        scanf("%d:%d:%d%s", &hours, &minutes, &seconds, period);
    }
    while(hours < 1 || hours > 12 ||
          minutes < 0 || minutes > 59 ||
          seconds < 0 || seconds > 59 ||
          (strstr(period, "AM") == NULL && strstr(period, "PM") == NULL) );
    //printf("%02i:%02i:%02i%s\n", hours, minutes, seconds, period);//TEST LINE

    if ( strstr(period, "AM") )
    {
        if (hours == 12)
        {
            hours = 0;
            printf("%02d:%02d:%02d", hours, minutes, seconds);
        }
        else
        {
            printf("%02d:%02d:%02d", hours, minutes, seconds);
        }

    }
    if ( strstr(period, "PM") )
    {

        if (hours == 12)
        {
            printf("%02d:%02d:%02d", hours, minutes, seconds);
        }
        else
        {
            hours = hours + 12;
            printf("%02d:%02d:%02d", hours, minutes, seconds);
        }



    }
    return 0;
}

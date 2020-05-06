



#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <time.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <string.h>

void ft_counter(void)
{
    int iCounter = 3;

    while (iCounter != 0)
    {
        printf("\n\n%d", iCounter--);
        sleep(1);
        system("clear");
    }
    return (0);
}
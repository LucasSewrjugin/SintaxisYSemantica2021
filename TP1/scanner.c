#include <ctype.h>
#include "scanner.h"
#include <stdio.h>
#include <stdlib.h>

int get_token(char *buffer)
{
    char c;
    int i = 0;

    while ((c = getchar()) != FDT)
    {
        if(isspace(c))
        {
            if (i)
            {
                buffer[i] = '\0';
                return CAD;
            }
            continue;
        }
        else if (c == ',')
        {
            if(i)
            {
                ungetc(c, stdin);
                buffer[i] = '\0';
                return CAD;
            }
            buffer[0] = c;
            buffer[1] = '\0';
            return SEP;
        }
        else
        {
            buffer[i++] = c;
        }
    }
    return FDT;
}

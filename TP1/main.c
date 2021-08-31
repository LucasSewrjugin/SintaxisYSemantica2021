#include <stdio.h>
#include "scanner.h"

int main()
{
    char buffer[128];
    char token;


    while((token = get_token(buffer)) != FDT)
    {
        if(token == SEP)
        {
            printf("Separador: ");
        }
        else
        {
            if (token == CAD)
            {
                printf("Cadena: ");
            }
        }

        printf("%s\n", buffer);
    }
    printf("Fin de texto: \n");
}

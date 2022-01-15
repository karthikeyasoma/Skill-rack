#include <stdio.h>
#include <stdlib.h>

int main()
{
    char c;
    int symbol = 0, dig = 0, upper = 0, lower = 0, leng = 0, count = 0;
    while (scanf("%c", &c) > 0)
    {
        if (c =='#'|| c =='!'|| c =='$'|| c =='@'|| c =='_')
            symbol++;
        else if (isdigit(c))
            dig++;
        else if (c >= 65 && c <= 90)
            upper++;
        else if (c >= 97 && c <= 122)
            lower++;

        count++;
    }
    if (count >= 8 && count <= 25)
        leng++;

    if (symbol >= 1 && dig >= 2 && upper >= 1 && lower >= 1 && leng > 0)
        printf("VALID");
    else
        printf("INVALID");
}
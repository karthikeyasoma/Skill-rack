#include <stdio.h>
#include <stdlib.h>

int main()
{
    char str[1000], s;
    int x, y, i = 0, res;
    while (scanf("%c", &s) > 0)
    {
        str[i] = s;
        i++;
    }

    x = str[i - 5] - '0'; 
    y = str[i - 2] - '0';
    i = i - 7;

    for (int j = 0; j < i; j++)
    {
        if (isalpha(str[j]))
        {
            char ree = str[j] + x;
            if (ree > 122)
            {
                int h = ree - 122;
                res = h + 96;
                printf("%c", res);
            }
            else
                printf("%c", ree);
        }
        else if (isdigit(str[j]))
        {
            int c = str[j] - '0';
            printf("%d", c + y);
        }
        else
            printf("%c", str[j]);
    }
}
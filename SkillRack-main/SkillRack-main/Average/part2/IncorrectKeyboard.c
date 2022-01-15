#include <stdio.h>
#include <stdlib.h>

int main()
{
    char c;
    int count = 0, sum = 1;
    while (scanf("%c", &c) > 0)
    {
        if (c == 'T' || c == 'D' || c == 'L' || c == 'F')
            count++;
    }

    for (int i = 0; i < count; i++)
    {
        sum = sum * 2;
    }
    printf("%d", sum);
}
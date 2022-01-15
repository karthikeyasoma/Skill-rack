#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, p[100], d[1000];
    int s[1000], tem;
    char v[100][1000], temp[100];
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        scanf("%s%d%d", &v[i], &p[i], &d[i]);
        s[i] = (p[i] * d[i]) / 100;
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (s[i] > s[j])
            {
                tem = s[i];
                s[i] = s[j];
                s[j] = tem;
                strcpy(temp, v[i]);
                strcpy(v[i], v[j]);
                strcpy(v[j], temp);
            }
        }
    }

    printf("%s\n", v[n - 1]);
}
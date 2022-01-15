#include <stdio.h>
#include <stdlib.h>

int main()
{
    int in, i, p = 0, o = 0, e = 0, even[100], odd[100], prime[100], temp, k, m;
    while (scanf("%d", &in) > 0)
    {
        int count = 0;
        for (i = 2; i <= in; i++)
        {
            if (in % i == 0)
                count++;
        }
        if (count == 1)
        {
            prime[p++] = in;
            // printf("%dhi\n",prime[p-1]);
        }
        else if (in % 2 != 0)
            odd[o++] = in;
        else if (in % 2 == 0)
            even[e++] = in;
    }
    for (k = 0; k < p; k++)
    {
        for (m = 0; m < p; m++)
        {
            if (prime[k] < prime[m])
            {
                temp = prime[k];
                prime[k] = prime[m];
                prime[m] = temp;
            }
        }
    }
    for (int k = 0; k < o; k++)
    {
        for (int m = 0; m < o; m++)
        {
            if (odd[k] < odd[m])
            {
                temp = odd[k];
                odd[k] = odd[m];
                odd[m] = temp;
            }
        }
    }

    for (int k = 0; k < e; k++)
    {
        for (int m = 0; m < e; m++)
        {
            if (even[k] < even[m])
            {
                temp = even[k];
                even[k] = even[m];
                even[m] = temp;
            }
        }
    }
    for (int k = 0; k < p; k++)
        printf("%d ", prime[k]);
    for (int k = 0; k < o; k++)
        printf("%d ", odd[k]);
    for (int k = 0; k < e; k++)
        printf("%d ", even[k]);
}
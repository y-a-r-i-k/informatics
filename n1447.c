#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int m[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &m[i]);
    }

    int min = m[0];
    for (int i = 0; i < n; ++i)
    {
        if (m[i] < min)
        {
            min = m[i];
        }
    }

    int max = m[0];
    for (int i = 0; i < n; ++i)
    {
        if (m[i] > max)
        {
            max = m[i];
        }
    }

    for (int i = 0; i < n; i++)
    {
        if (m[i] == max)
        {
            m[i] = min;
        }
    }

    for (int i = 0; i < n; i++)
    { 
        printf("%d ", m[i]);
    }
}
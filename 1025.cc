#include <cstdio>
#include <algorithm>
#include <cstring>

int main(int argc, char const *argv[])
{
    int n, i;
    int a[101], b[101];
    memset(a, 0, sizeof(a));
    memset(b, 0, sizeof(b));
    bool flag = false;

    scanf("%d", &n);
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);
    for (i = 0; i < n; i++)
        scanf("%d", &b[i]);

    // for (int i = 0; i < n; i++)
    //     printf("%d ", b[i]);

    for (i = 1; i < n; i++)
        if (b[i] < b[i - 1])
            break;

    for (; i < n; i++)
    {
        if (a[i] != b[i])
        {
            printf("Merge Sort\n");
            flag = true;
            break;
        }
    }
    if (i == n)
        printf("Insertion Sort\n");

    if (flag)
    {
        // merge sort
        for (i = 1; i < n; i++)
            if (b[i] < b[i - 1])
                break;

        int index = i * 2;
        for (i = 0; (i + index) <= n; i += index)
            std::sort(b + i, b + i + index);
    }
    else
    {
        int t;
        for (i = 1; i < n; i++)
            if (b[i] < b[i - 1])
            {
                t = b[i];
                break;
            }

        for (int j = 0; j <= i; j++)
        {
            if (b[j] < t)
                continue;
            for (int k = i; k > j; k--)
                b[k] = b[k - 1];
            b[j] = t;
            break;
        }
    }

    for (i = 0; i < n; i++)
    {
        if (i)
            printf(" %d", b[i]);
        else
            printf("%d", b[i]);
    }

    return 0;
}

#include <cstdio>
#include <cstring>

int main(int argc, char const *argv[])
{
    char a[100001];
    int b[100001];
    memset(a, 0, sizeof(a));
    memset(b, 0, sizeof(b));
    scanf("%s", a);

    int len = strlen(a);
    int np = 0, nt = 0;
    for (int i = 0; i < len; i++)
    {
        if (a[i] == 'P')
            np++;
        else if (a[i] == 'A')
            b[i] = np;
    }

    for (int i = len - 1; i >= 0; i--)
    {
        if (a[i] == 'T')
            nt++;
        else if (a[i] == 'A')
            b[i] *= nt;
    }

    int sum = 0;
    for (int i = 0; i < len; i++)
    {
        sum += b[i];
        sum %= 1000000007;
    }

    printf("%d\n", sum);

    return 0;
}

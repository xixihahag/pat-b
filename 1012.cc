#include <cstdio>

int main(int argc, char const *argv[])
{
    long long a, b, c;
    int d, t;
    scanf("%lld %lld %d", &a, &b, &d);
    c = a + b;
    int res[100], cnt = 0;

    while (c)
    {
        t = c % d;
        c /= d;
        res[cnt++] = t;
    }

    for (int i = cnt - 1; i >= 0; i--)
    {
        printf("%d", res[i]);
    }

    return 0;
}

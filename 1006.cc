#include <cstdio>
#include <cstring>

int main(int argc, char const *argv[])
{
    char a[11], b[11];
    int da, db;
    long long pa = 0, pb = 0;
    memset(a, 0, sizeof(a));
    memset(b, 0, sizeof(b));

    scanf("%s %d %s %d", a, &da, b, &db);

    for (int i = 0; a[i]; i++)
    {
        if (a[i] - '0' == da)
        {
            pa *= 10;
            pa += da;
        }
    }

    for (int i = 0; b[i]; i++)
    {
        if (b[i] - '0' == db)
        {
            pb *= 10;
            pb += db;
        }
    }

    printf("%llu\n", pa + pb);

    return 0;
}

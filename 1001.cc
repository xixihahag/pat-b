#include <cstdio>

int main(int argc, char const *argv[])
{
    double a, b, c;
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        scanf("%lf %lf %lf", &a, &b, &c);
        if (a + b > c)
            printf("Case #%d: true\n", i);
        else
            printf("Case #%d: false\n", i);
    }
    return 0;
}

#include <cstdio>
#include <algorithm>

struct yuebing
{
    int n;
    double money;
    double unit;
};

bool cmp(const struct yuebing &a, const struct yuebing &b)
{
    return a.unit > b.unit;
}

int main(int argc, char const *argv[])
{
    int n, d;
    struct yuebing y[1001];

    scanf("%d %d", &n, &d);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &y[i].n);
    }

    for (int i = 0; i < n; i++)
    {
        scanf("%lf", &y[i].money);
        y[i].unit = y[i].money / (y[i].n * 1.0);
    }

    std::sort(y, y + n, cmp);

    double count = 0;
    for (int i = 0; i < n && d > 0; i++)
    {
        if (d >= y[i].n)
        {
            count += y[i].money;
            d -= y[i].n;
        }
        else
        {
            count += y[i].unit * d;
            break;
        }
    }

    printf("%.2lf", count);

    return 0;
}

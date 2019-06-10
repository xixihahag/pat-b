#include <cstdio>

int main(int argc, char const *argv[])
{
    int w[] = {17 * 29, 29, 1};
    int a, b, c, d, e, f;
    scanf("%d.%d.%d %d.%d.%d", &a, &b, &c, &d, &e, &f);
    int pa = a * w[0] + b * w[1] + c * w[2], pb = d * w[0] + e * w[1] + f * w[2];
    int t = pb - pa;
    if (t < 0)
    {
        printf("-");
        t *= -1;
    }
    printf("%d.%d.%d\n", t / w[0], t % w[0] / w[1], t % w[0] % w[1] / w[2]);

    return 0;
}

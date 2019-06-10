#include <cstdio>
#include <math.h>

int main(int argc, char const *argv[])
{
    int n, a = 1, add = 6;
    char c;
    scanf("%d %c", &n, &c);

    int ceng = (int)pow((n + 1) / 2, 0.5);
    int maxnum = 2 * ceng - 1;
    int space = 0;

    // 上面
    int t = ceng;
    while (t > 0)
    {
        for (int i = 0; i < space; i++)
            printf(" ");
        space += 1;
        for (int i = 0; i < maxnum; i++)
            printf("%c", c);
        maxnum -= 2;
        printf("\n");
        t--;
    }

    // 下面
    t = ceng - 1;
    space -= 2;
    maxnum += 4;
    while (t > 0)
    {
        for (int i = 0; i < space; i++)
            printf(" ");
        space -= 1;
        for (int i = 0; i < maxnum; i++)
            printf("%c", c);
        maxnum += 2;
        printf("\n");
        t--;
    }

    printf("%d\n", n - 2 * ceng * ceng + 1);

    return 0;
}
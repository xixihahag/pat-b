#include <cstdio>
#include <cstring>
#include <algorithm>

int main(int argc, char const *argv[])
{
    char num[1010];
    int count[11], t;
    memset(count, 0, sizeof(count));

    scanf("%s", num);
    int len = strlen(num);

    for (int i = 0; i < len; i++)
    {
        t = num[i] - '0';
        count[t]++;
    }

    for (int i = 0; i < 11; i++)
    {
        if (count[i] != 0)
        {
            printf("%d:%d\n", i, count[i]);
        }
    }

    return 0;
}

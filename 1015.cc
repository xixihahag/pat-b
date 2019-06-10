#include <cstdio>
#include <cstring>

struct Info
{
    int addr;
    int data;
    int next;
};

int main(int argc, char const *argv[])
{
    struct Info info[100001];
    int n, k, st, cnt = 0, begin = 0;
    scanf("%d %d %d", &st, &n, &k);

    for (int i = 0; i < n; i++)
        scanf("%d %d %d", &info[i].addr, &info[i].data, &info[i].next);

    // printf("**********\n");
    bool first = true;
    while (cnt <= n)
    {
        if (st == -1)
            break;
        for (int i = cnt; i < n; i++)
        {
            if (st == info[i].addr)
            {
                struct Info tin;
                memcpy(&tin, &info[cnt], sizeof(struct Info));
                memcpy(&info[cnt], &info[i], sizeof(struct Info));
                memcpy(&info[i], &tin, sizeof(struct Info));
                st = info[cnt++].next;
                break;
            }
        }

        if (cnt != 0 && cnt % k == 0)
        {
            for (int i = cnt - 1; i >= begin; i--)
            {
                if (first)
                {
                    first = false;
                    printf("%05d %d ", info[i].addr, info[i].data);
                }
                else
                    printf("%05d\n%05d %d ", info[i].addr, info[i].addr, info[i].data);
            }
            begin = cnt;
        }
    }

    if (cnt != begin)
    {
        for (int i = begin; i < cnt; i++)
        {
            if (first)
            {
                first = false;
                printf("%05d %d ", info[i].addr, info[i].data);
            }
            else
                printf("%05d\n%05d %d ", info[i].addr, info[i].addr, info[i].data);
        }
    }

    printf("-1\n");

    return 0;
}
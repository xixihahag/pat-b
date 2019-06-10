#include <cstdio>
#include <cstring>

int main(int argc, char const *argv[])
{
    char num[10000], a[10000];
    scanf("%s", num);
    int len = strlen(num), cura = 0, i;
    bool ispositive = true;
    for (i = 0; i < len; i++)
    {
        if (num[i] == 'E')
        {
            i++;
            break;
        }

        if (num[i] == '-')
        {
            ispositive = false;
            continue;
        }
        else if (num[i] == '+')
            continue;

        if (num[i] == '.')
            continue;
        a[cura++] = num[i];
    }

    bool left = false;
    if (num[i++] == '-')
        left = true;

    int cnt = 0;
    for (; i < len; i++)
    {
        cnt *= 10;
        cnt += num[i] - '0';
    }

    if (!ispositive)
        printf("-");
    if (left)
    {
        if (cnt > 0)
        {
            printf("0.");
            cnt--;
        }
        while (cnt > 0)
        {
            printf("0");
            cnt--;
        }

        for (i = 0; i < cura; i++)
        {
            printf("%c", a[i]);
        }
    }
    else
    {
        for (i = 0; i < cura; i++)
        {
            printf("%c", a[i]);
            if (i == cnt)
                printf(".");
        }

        while (i <= cnt)
        {
            printf("0");
            i++;
        }
    }

    return 0;
}

#include <cstdio>
#include <cstring>
#include <algorithm>
using namespace std;

int main(int argc, char const *argv[])
{
    char a[1001], b[1001];
    scanf("%s %s", a, b);

    int lena = strlen(a), lenb = strlen(b);

    sort(a, a + lena);
    sort(b, b + lenb);

    // printf("%d %d\n", lena, lenb);

    // printf("\n%s\n%s\n", a, b);

    int cur = 0, rest = 0, incom = 0, i;

    for (i = 0; i < lena && cur < lenb;)
    {
        if (a[i] == b[cur])
        {
            i++;
            cur++;
            continue;
        }

        while (a[i] < b[cur] && i < lena)
        {
            i++;
            rest++;
        }

        while (b[cur] < a[i] && cur < lenb)
        {
            cur++;
            incom++;
        }
    }

    if (incom == 0)
    {
        printf("Yes %d", rest);
    }
    else
    {
        for (i = cur; i < lenb; i++)
            incom++;
        printf("No %d", incom);
    }

    return 0;
}
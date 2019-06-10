#include <cstdio>
#include <algorithm>
#include <cstring>
#include <unistd.h>
using namespace std;

bool down(int a, int b)
{
    return a > b;
}

int main(int argc, char const *argv[])
{
    char a[5], b[5];
    int borrow = 0;
    memset(a, 0, sizeof(a));
    memset(b, 0, sizeof(b));

    scanf("%s", a);

    int len = strlen(a);
    for (int i = 0; i < 4; i++)
    {
        if (i < len)
            b[i] = a[i];
        else
        {
            a[i] = '0';
            b[i] = '0';
        }
    }

    while (true)
    {
        // sleep(2);
        sort(a, a + 4);
        sort(b, b + 4, down);

        printf("%s - %s = ", b, a);

        for (int i = 3; i >= 0; i--)
        {
            borrow = b[i] - a[i] - borrow;
            if (borrow >= 0)
            {
                a[i] = borrow + 48;
                borrow = 0;
            }
            else
            {
                a[i] = borrow + 10 + 48;
                borrow = 1;
            }
            b[i] = a[i];
        }

        printf("%s\n", a);
        if (strcmp(a, "0000") == 0 || strcmp(a, "6174") == 0)
            break;
    }

    return 0;
}

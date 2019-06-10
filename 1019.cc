#include <cstdio>
#include <cstring>

int main(int argc, char const *argv[])
{
    char a[1024], b[1024];
    bool exit[26];
    bool num[10];
    memset(exit, 0, sizeof(exit));
    memset(num, 0, sizeof(num));

    scanf("%s %s", a, b);
    int lena = strlen(a), lenb = strlen(b), j = 0;
    for (int i = 0; i < lena; i++)
    {
        if (a[i] == b[j])
            j++;
        else
        {
            if (a[i] >= 'a' && a[i] <= 'z')
                a[i] -= 32;

            if (a[i] >= 'A' && a[i] <= 'Z')
            {
                if (exit[a[i] - 'A'] == false)
                {
                    exit[a[i] - 'A'] = true;
                    printf("%c", a[i]);
                }
            }
            else
            {
                if (num[a[i] - '0'] == false)
                {
                    num[a[i] - '0'] = true;
                    printf("%c", a[i]);
                }
            }
        }
    }
    printf("\n");

    return 0;
}
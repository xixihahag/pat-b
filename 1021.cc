#include <cstdio>
#include <cstring>

int main(int argc, char const *argv[])
{
    int wei[17] = {7, 9, 10, 5, 8, 4, 2, 1, 6, 3, 7, 9, 10, 5, 8, 4, 2};
    char a[11] = {'1',
                  '0',
                  'X',
                  '9',
                  '8',
                  '7',
                  '6',
                  '5',
                  '4',
                  '3',
                  '2'};

    int n, num;
    bool exist = false;
    char c[20];
    memset(c, 0, sizeof(c));

    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%s", c);
        num = 0;
        for (int j = 0; j < 18; j++)
        {
            if (c[j] < '0' || c[j] > '9')
            {
                printf("%s\n", c);
                exist = true;
                break;
            }

            if (j == 17)
            {
                num %= 11;
                if (a[num] != c[j])
                {
                    // printf("a = %c,c = %c\n", a[num], c[j]);
                    printf("%s\n", c);
                    exist = true;
                }
            }
            else
                num += (c[j] - '0') * wei[j];
        }
    }

    if (!exist)
        printf("All passed\n");

    return 0;
}

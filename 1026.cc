#include <cstdio>

int main(int argc, char const *argv[])
{
    int n;
    char c;

    scanf("%d %c", &n, &c);
    int k = (n + 1) / 2 - 2;
    for (int i = 0; i < n; i++)
        printf("%c", c);

    for (int i = 0; i < k; i++)
    {
        printf("\n");
        printf("%c", c);
        for (int j = 0; j < n - 2; j++)
            printf(" ");
        printf("%c", c);
    }

    printf("\n");
    for (int i = 0; i < n; i++)
        printf("%c", c);

    return 0;
}

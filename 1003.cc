#include <cstdio>
#include <cstring>

int prime[10001];
bool book[104731];

int main(int argc, char const *argv[])
{
    memset(book, true, sizeof(book));

    int cnt = 1;
    for (int i = 2; cnt <= 10000; i++)
    {
        if (book[i]) //是素数
        {
            prime[cnt++] = i;
            // printf("i = %d\n", i);
            for (long long j = (long long)i * i; j <= 104730; j = j + i)
            {
                // printf("i = %d,j = %d\n", i, j);
                book[j] = false; //不是素数
            }
        }
    }

    int a, b;
    cnt = 0;
    scanf("%d %d", &a, &b);
    for (int i = a; i <= b; i++)
    {
        printf("%d", prime[i]);
        cnt++;
        if (cnt == 10)
        {
            cnt = 0;
            printf("\n");
        }
        else if (i != b)
        {
            printf(" ");
        }
    }

    return 0;
}

#include <cstdio>
#include <cstring>
#include <vector>
using namespace std;

int main(int argc, char const *argv[])
{
    char q[1001];
    int r, t, i;
    vector<int> v;

    memset(q, 0, sizeof(q));
    scanf("%s %d", q, &r);

    for (i = 0; q[i] && q[i + 1]; i++)
    {
        // printf("q[i] = %c\n", q[i]);

        t = 0;
        t = q[i] - '0';
        t *= 10;
        t += q[i + 1] - '0';

        // printf("t = %d\n", t);

        v.push_back(t / r);
        q[i + 1] = t % r + 48;
    }

    vector<int>::iterator it;
    for (it = v.begin(); it != v.end(); it++)
    {
        printf("%d", *it);
    }
    printf(" %c\n", q[i]);

    return 0;
}

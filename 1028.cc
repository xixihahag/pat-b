#include <cstdio>
#include <map>
using namespace std;

int main(int argc, char const *argv[])
{
    int n, t;
    map<int, int> mp;

    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &t);
        mp[t]++;
    }
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &t);
        if (i)
            printf(" %d", mp[t]);
        else
            printf("%d", mp[t]);
    }

    return 0;
}

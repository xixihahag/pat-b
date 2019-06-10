#include <cstdio>
#include <unordered_map>
using namespace std;

int main(int argc, char const *argv[])
{
    unordered_map<int, int> mp;

    int n, a, b;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d %d", &a, &b);
        mp[a] += b;
    }

    unordered_map<int, int>::iterator it, cur = mp.begin();
    for (it = mp.begin(); it != mp.end(); it++)
    {
        if (it->second > cur->second)
            cur = it;
    }

    printf("%d %d", cur->first, cur->second);

    return 0;
}

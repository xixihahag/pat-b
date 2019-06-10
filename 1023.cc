#include <cstdio>
#include <cstring>
#include <unordered_map>
using namespace std;

int main(int argc, char const *argv[])
{
    unordered_map<char, int> mp;
    bool up = false;

    char a[100005], b[100005];
    scanf("%s %s", a, b);

    int lena = strlen(a);
    for (int i = 0; i < lena; i++)
    {
        mp[a[i]] = 1;
        if (a[i] == '+')
            up = true;
        if (a[i] >= 'A' && a[i] <= 'Z')
            mp[a[i] + 32] = 1;
    }

    int lenb = strlen(b);
    bool out = false;
    for (int i = 0; i < lenb; i++)
    {
        if (b[i] >= 'A' && b[i] <= 'Z' && up)
            continue;
        if (mp.find(b[i]) != mp.end())
            continue;
        printf("%c", b[i]);
        out = true;
    }

    return 0;
}

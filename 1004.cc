#include <cstdio>
#include <cstring>
#include <string>

using namespace std;

int main(int argc, char const *argv[])
{
    string week[7] = {"MON", "TUE", "WED", "THU", "FRI", "SAT", "SUN"};
    int a[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    int b[13] = {11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23};

    char ca[60], cb[60], cc[60], cd[60];
    memset(ca, 0, sizeof(ca));
    memset(cb, 0, sizeof(cb));
    memset(cc, 0, sizeof(cc));
    memset(cd, 0, sizeof(cd));

    scanf("%s %s %s %s", ca, cb, cc, cd);

    int i = 0;
    for (; ca[i] && cb[i]; i++)
    {
        if (ca[i] > 'Z' || ca[i] < 'A')
            continue;
        if (cb[i] > 'Z' || cb[i] < 'A')
            continue;
        if (ca[i] == cb[i])
        {
            printf("%s ", week[ca[i] - 'A'].c_str());
            i++;
            break;
        }
    }

    for (; ca[i] && cb[i]; i++)
    {
        if ((ca[i] < '0' || ca[i] > '9') && (ca[i] < 'A' || ca[i] > 'N'))
            continue;
        if ((cb[i] < '0' || cb[i] > '9') && (cb[i] < 'A' || cb[i] > 'N'))
            continue;
        if (ca[i] == cb[i])
        {
            // printf("i = %d\n", i);
            if (ca[i] >= '0' && ca[i] <= '9')
            {
                printf("%02d:", a[ca[i] - '0']);
            }
            else
            {
                printf("%02d:", b[ca[i] - 'A' - 1]);
            }
            break;
        }
    }

    for (i = 0; cc[i] && cd[i]; i++)
    {
        if ((cc[i] < 'a' || cc[i] > 'z') && (cc[i] < 'A' || ca[i] > 'Z'))
            continue;
        if ((cd[i] < 'a' || cd[i] > 'z') && (cd[i] < 'A' || cd[i] > 'Z'))
            continue;
        if (cc[i] == cd[i])
        {
            printf("%02d", i);
            break;
        }
    }

    return 0;
}

#include <cstdio>
#include <cstring>
using namespace std;

int main(int argc, char const *argv[])
{
    int n, count = 0;
    scanf("%d", &n);
    char yname[6], oname[6], tname[6];
    char ybir[15], obir[15], tbir[15];
    char maxbir[15] = "2014/09/06";
    char minbir[15] = "1814/09/06";
    for (int i = 0; i < n; i++)
    {
        scanf("%s %s", tname, tbir);

        if (strcmp(tbir, maxbir) > 0 || strcmp(tbir, minbir) < 0)
            continue;
        count++;
        if (count == 1)
        {
            strcpy(yname, tname);
            strcpy(oname, tname);

            strcpy(ybir, tbir);
            strcpy(obir, tbir);
        }
        else
        {
            if (strcmp(tbir, obir) < 0)
            {
                strcpy(obir, tbir);
                strcpy(oname, tname);
            }
            else if (strcmp(tbir, ybir) > 0)
            {
                strcpy(ybir, tbir);
                strcpy(yname, tname);
            }
        }
    }

    printf("%d %s %s\n", count, oname, yname);

    return 0;
}

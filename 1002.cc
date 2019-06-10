#include <cstdio>

int main(int argc, char const *argv[])
{
    int n[5] = {0};
    bool exist[5] = {false};
    int count, num, t;
    bool increase = true;
    int c3 = 0;
    scanf("%d", &count);
    for (int i = 0; i < count; i++)
    {
        scanf("%d", &num);
        t = num % 5;
        if (t == 0)
        {
            if (num % 2 == 0)
            {
                exist[0] = true;
                n[0] += num;
            }
        }
        else if (t == 1)
        {
            exist[1] = true;
            if (increase)
            {
                n[1] += num;
            }
            else
            {
                n[1] -= num;
            }

            increase = !increase;
        }
        else if (t == 2)
        {
            exist[2] = true;
            n[2]++;
        }
        else if (t == 3)
        {
            exist[3] = true;
            n[3] += num;
            c3++;
        }
        else
        {
            exist[4] = true;
            n[4] = n[4] > num ? n[4] : num;
        }
    }

    for (int i = 0; i < 5; i++)
    {
        if (exist[i])
        {
            if (i == 3)
            {
                printf("%.1lf", n[i] / (c3 * 1.0));
            }
            else
            {
                printf("%d", n[i]);
            }
        }
        else
            printf("N");

        if (i != 4)
            printf(" ");
    }

    return 0;
}

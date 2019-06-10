#include <cstdio>

int main(int argc, char const *argv[])
{
    int a, b;
    int time, t;
    int out[3] = {0, 0, 0}, cnt = 0;
    scanf("%d %d", &a, &b);
    time = (b - a + 50) / 100;

    while (time > 0)
    {
        t = time % 60;
        time = (time - t) / 60;
        out[cnt++] = t;
    }

    printf("%02d:%02d:%02d", out[2], out[1], out[0]);

    return 0;
}

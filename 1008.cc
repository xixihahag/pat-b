#include <cstdio>

struct student
{
    student() : win(0), lose(0), draw(0), c(0), j(0), b(0) {}
    int win, lose, draw, c, j, b;
};

int main(int argc, char const *argv[])
{
    int n;
    char a, b;
    student s1, s2;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        getchar();
        scanf("%c %c", &a, &b);
        // printf("%c %c\n", a, b);
        if (a == 'C' && b == 'C')
        {
            s1.draw++;
            s2.draw++;
        }
        else if (a == 'C' && b == 'J')
        {
            s1.win++;
            s1.c++;
            s2.lose++;
        }
        else if (a == 'C' && b == 'B')
        {
            s2.win++;
            s2.b++;
            s1.lose++;
        }
        else if (a == 'J' && b == 'C')
        {
            s2.win++;
            s2.c++;
            s1.lose++;
        }
        else if (a == 'J' && b == 'J')
        {
            s1.draw++;
            s2.draw++;
        }
        else if (a == 'J' && b == 'B')
        {
            s1.win++;
            s1.j++;
            s2.lose++;
        }
        else if (a == 'B' && b == 'C')
        {
            s1.win++;
            s1.b++;
            s2.lose++;
        }
        else if (a == 'B' && b == 'J')
        {
            s2.win++;
            s2.j++;
            s1.lose++;
        }
        else if (a == 'B' && b == 'B')
        {
            s1.draw++;
            s2.draw++;
        }
    }

    printf("%d %d %d\n", s1.win, s1.draw, s1.lose);
    printf("%d %d %d\n", s2.win, s2.draw, s2.lose);

    if (s1.b >= s1.c && s1.b >= s1.j)
        printf("B ");
    else if (s1.c >= s1.b && s1.c >= s1.j)
        printf("C ");
    else
        printf("J ");

    if (s2.b >= s2.c && s2.b >= s2.j)
        printf("B");
    else if (s2.c >= s2.b && s2.c >= s2.j)
        printf("C");
    else
        printf("J");

    return 0;
}

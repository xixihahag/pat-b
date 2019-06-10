#include <stdio.h>
int gcd(int a, int b) { return !b ? a : gcd(b, a % b); }
void p(int a, int b)
{
    if (b == 0)
    {
        printf("Inf");
        return;
    }
    int f, t;
    b > 0 ?: (a *= -1, b *= -1), f = a < 0 ? -1 : 1, a *= f, t = gcd(a, b), a /= t, b /= t;
    a % b ? a > b ? printf(f > 0 ? "%d %d/%d" : "(-%d %d/%d)", a / b, a % b, b) : printf(f > 0 ? "%d/%d" : "(-%d/%d)", a, b) : printf(!a || f > 0 ? "%d" : "(-%d)", a / b);
}
int main()
{ //the shorter,the better.
    int a1, b1, a2, b2;
    for (; ~scanf("%d/%d %d/%d", &a1, &b1, &a2, &b2); p(a1, b1), printf(" + "), p(a2, b2), printf(" = "), p(a1 * b2 + a2 * b1, b1 * b2), printf("\n"), p(a1, b1), printf(" - "), p(a2, b2), printf(" = "), p(a1 * b2 - a2 * b1, b1 * b2), printf("\n"), p(a1, b1), printf(" * "), p(a2, b2), printf(" = "), p(a1 * a2, b1 * b2), printf("\n"), p(a1, b1), printf(" / "), p(a2, b2), printf(" = "), p(a1 * b2, a2 * b1), printf("\n"))
        ;
}
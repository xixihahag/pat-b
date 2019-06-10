#include <cstdio>
// #include <cstring>
#include <algorithm>
#include <vector>
using namespace std;

struct student
{
    int num, a, b;
};

bool mysort(const struct student &s1, const struct student &s2)
{
    int a = s1.a + s1.b, b = s2.a + s2.b;
    if (a == b)
    {
        if (s1.a == s2.a)
        {
            return s1.num < s2.num;
        }
        else
        {
            return s1.a > s2.a;
        }
    }

    return a > b;
}

int main(int argc, char const *argv[])
{
    int n, l, h, cnt = 0;
    vector<struct student> s1;
    vector<struct student> s2;
    vector<struct student> s3;
    vector<struct student> s4;
    struct student stu;

    scanf("%d %d %d", &n, &l, &h);
    for (int i = 0; i < n; i++)
    {
        scanf("%d %d %d", &(stu.num), &(stu.a), &(stu.b));
        if (stu.a < l || stu.b < l)
            continue;
        if (stu.a >= h && stu.b >= h)
        {
            s1.push_back(stu);
        }
        else if (stu.b < h && stu.a >= h)
        {
            s2.push_back(stu);
        }
        else if (stu.a < h && stu.b < h && stu.a >= stu.b)
        {
            s3.push_back(stu);
        }
        else
        {
            s4.push_back(stu);
        }
        cnt++;
    }

    sort(s1.begin(), s1.end(), mysort);
    sort(s2.begin(), s2.end(), mysort);
    sort(s3.begin(), s3.end(), mysort);
    sort(s4.begin(), s4.end(), mysort);

    printf("%d\n", cnt);
    vector<struct student>::iterator it;
    for (it = s1.begin(); it != s1.end(); it++)
        printf("%d %d %d\n", it->num, it->a, it->b);

    for (it = s2.begin(); it != s2.end(); it++)
        printf("%d %d %d\n", it->num, it->a, it->b);

    for (it = s3.begin(); it != s3.end(); it++)
        printf("%d %d %d\n", it->num, it->a, it->b);

    for (it = s4.begin(); it != s4.end(); it++)
        printf("%d %d %d\n", it->num, it->a, it->b);

    return 0;
}

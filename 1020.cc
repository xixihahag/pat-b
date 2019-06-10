#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    long N, p, temp;
    cin >> N >> p;
    vector<long> lvec;
    for (long i = 0; i < N; i++)
    {
        cin >> temp;
        lvec.push_back(temp);
    }
    sort(lvec.begin(), lvec.end());
    long max = 0;
    for (long i = 0; i < N; i++)
    {
        for (long j = i + max; j < N; j++)
        {
            if (lvec[j] > lvec[i] * p)
                break;
            max++;
        }
    }
    cout << max;

    return 0;
}
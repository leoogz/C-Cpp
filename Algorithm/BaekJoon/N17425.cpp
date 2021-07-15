#include <bits/stdc++.h>

using namespace std;

int main()
{
    vector<long long> g(1000001);
    int N, num;
    long long result = 0;
    g[1] = 1;
    vector<long long> f(1000001, 1);
    for (int i = 2; i < 1000001; i++)
    {
        for (int j = 1; j * i <= 1000000; j++)
        {
            f[i * j] += i;
        }
        g[i] = g[i - 1] + f[i];
    }

    scanf("%d", &N);
    for (int i = 0; i < N; i++)
    {
        scanf("%d", &num);
        printf("%lld\n", g[num]);
    }
}
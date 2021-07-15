#include <bits/stdc++.h>

using namespace std;

int main()
{
    int N;
    long long result = 0;
    scanf("%d", &N);
    for (int i = 1; i <= N; i++)
    {
        result += i * (N / i);
    }
    printf("%lld", result);
}

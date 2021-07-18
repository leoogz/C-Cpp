//x보다 작거나 같은 모든 자연수 y의 f(y)값을 더한 값은 g(x)로 표현한다.
//자연수 N이 주어졌을 때, g(N)을 구해보자.
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

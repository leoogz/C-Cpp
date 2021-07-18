//N개를 종이에 적는다. 그 다음, 종이에 적은 수를 M으로 나누었을 때, 나머지가 모두 같게 되는 M을 모두 찾으려고 한다. M은 1보다 커야 한다.
//N개의 수가 주어졌을 때, 가능한 M을 모두 찾는 프로그램을 작성하시오.
#include <bits/stdc++.h>

using namespace std;

int get_gcd(int a, int b);

int main()
{
    int N, temp, min = 1000000000, prev = 0, diff[100], gcd;

    scanf("%d", &N);
    for (int i = 0; i < N; i++)
    {
        scanf("%d", &temp);
        if (i > 0)
        {
            diff[i - 1] = abs(temp - prev);
        }
        prev = temp;
    }
    gcd = diff[0];
    for (int i = 0; i < N - 1; i++)
    {
        gcd = get_gcd(gcd, diff[i]);
    }
    vector<int> result;
    for (int i = 2; i * i <= gcd; i++)
    {
        if (gcd % i == 0)
        {
            result.push_back(i);
            result.push_back(gcd / i);
        }
    }
    result.push_back(gcd);
    sort(result.begin(), result.end());
    result.erase(unique(result.begin(), result.end()), result.end());
    for (int i = 0; i < result.size(); i++)
    {
        printf("%d ", result[i]);
    }
    printf("\n");
}

int get_gcd(int a, int b)
{
    if (a % b == 0)
        return b;
    return get_gcd(b, a % b);
}

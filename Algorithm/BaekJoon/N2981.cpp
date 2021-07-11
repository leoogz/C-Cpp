#include <stdio.h>
#include <cstdlib>
#include <iostream>
#include <algorithm>
#include <queue>
#include <string>
#include <cstring>

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

#include <stdio.h>
#include <cstdlib>
#include <iostream>
#include <algorithm>
#include <queue>
#include <set>
#include <string>
#include <cstring>
#include <vector>
#include <tuple>

using namespace std;

int main()
{
    int N;
    long distance[100001], price[100001];
    long prev_price = 1000000001;
    long cost = 0;
    scanf("%d", &N);
    for (int i = 0; i < N - 1; i++)
    {
        scanf("%ld", distance + i);
    }
    for (int i = 0; i < N; i++)
    {
        scanf("%ld", price + i);
    }
    for (int i = 0; i < N - 1; i++)
    {
        if (prev_price > price[i])
        {
            prev_price = price[i];
        }
        cost += prev_price * distance[i];
    }
    printf("%ld", cost);
}
#include <stdio.h>
#include <iostream>
#include <algorithm>
#include <queue>
#include <string>
#include <cstring>

using namespace std;

priority_queue<int> pq;

int main()
{
    int N, temp, max = 0, min = 1000000;

    scanf("%d", &N);
    for (int i = 0; i < N; i++)
    {
        scanf("%d", &temp);
        if (temp > max)
            max = temp;
        if (temp < min)
            min = temp;
    }
    printf("%d", max * min);
}
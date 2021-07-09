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
    int N, temp, result = 0;
    scanf("%d", &N);
    for (int i = 0; i < N; i++)
    {
        scanf("%d", &temp);
        pq.push(temp);
    }
    for (int i = 0; i < N; i++)
    {
        temp = pq.top();
        if (result < temp * (i + 1))
        {
            result = temp * (i + 1);
        }
        pq.pop();
    }
    printf("%d", result);
    return 0;
}
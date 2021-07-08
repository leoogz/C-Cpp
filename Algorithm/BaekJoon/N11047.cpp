#include <stdio.h>
#include <iostream>
#include <algorithm>
#include <queue>

using namespace std;

priority_queue<int> pq;

int main()
{
    int N, temp, num = 0, K;
    scanf("%d %d", &N, &K);
    for (int i = 0; i < N; i++)
    {
        scanf("%d", &temp);
        pq.push(temp);
    }
    for (int i = 0; i < N; i++)
    {
        temp = pq.top();
        num += K / temp;
        K %= temp;
        if (K == 0)
            break;
        pq.pop();
    }
    printf("%d\n", num);

    return 0;
}
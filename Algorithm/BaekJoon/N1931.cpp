#include <stdio.h>
#include <iostream>
#include <algorithm>
#include <queue>
#include <vector>
#include <tuple>

using namespace std;

int main()
{
    int N, start, end, current_end = 0, num = 0, K;
    priority_queue<pair<int, int>, vector<pair<int, int> >, greater<pair<int, int> > > pq;
    scanf("%d", &N);
    for (int i = 0; i < N; i++)
    {
        scanf("%d %d", &start, &end);
        pq.push(make_pair(end, start));
    }

    for (int i = 0; i < N; i++)
    {
        end = pq.top().first;
        start = pq.top().second;
        if (start >= current_end)
        {
            num++;
            current_end = end;
        }
        pq.pop();
    }

    printf("%d", num);

    return 0;
}
#include <stdio.h>
#include <iostream>
#include <algorithm>
#include <queue>

using namespace std;

priority_queue<int> pq;

int main()
{
    int num, temp, time = 0;
    scanf("%d", &num);
    for (int i = 0; i < num; i++)
    {
        scanf("%d", &temp);
        pq.push(temp);
    }
    for (int i = 0; i < num; i++)
    {
        temp = pq.top();
        time += temp * (i + 1);
        pq.pop();
    }
    printf("%d\n", time);

    return 0;
}
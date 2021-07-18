//줄을 서 있는 사람의 수 N과 각 사람이 돈을 인출하는데 걸리는 시간 Pi가 주어졌을 때, 각 사람이 돈을 인출하는데 필요한 시간의 합의 최솟값을 구하는 프로그램을 작성하시오.
#include <bits/stdc++.h>

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
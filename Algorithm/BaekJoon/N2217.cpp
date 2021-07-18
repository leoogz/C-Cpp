//각 로프들에 대한 정보가 주어졌을 때, 이 로프들을 이용하여 들어올릴 수 있는 물체의 최대 중량을 구해내는 프로그램을 작성하시오.
#include <bits/stdc++.h>

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
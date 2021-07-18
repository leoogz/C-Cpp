//동전을 적절히 사용해서 그 가치의 합을 K로 만들려고 한다. 이때 필요한 동전 개수의 최솟값을 구하는 프로그램을 작성하시오.
#include <bits/stdc++.h>

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
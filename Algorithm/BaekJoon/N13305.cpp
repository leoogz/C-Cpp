//각 도시에 있는 주유소의 기름 가격과, 각 도시를 연결하는 도로의 길이를 입력으로 받아 제일 왼쪽 도시에서 제일 오른쪽 도시로 이동하는 최소의 비용을 계산하는 프로그램을 작성하시오.
#include <bits/stdc++.h>

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
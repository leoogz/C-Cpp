//첫째 줄에는 별 1개, 둘째 줄에는 별 2개, N번째 줄에는 별 N개를 찍는 문제
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int N;
    scanf("%d", &N);
    for (int i = 0; i < N; i++)
    {
        for (int j = -1; j < i; j++)
            printf("*");
        printf("\n");
    }

    return 0;
}
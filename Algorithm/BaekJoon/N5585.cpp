#include <stdio.h>
#include <iostream>
#include <algorithm>
#include <queue>

using namespace std;

priority_queue<int> pq;

int main()
{
    int changes[6] = {500, 100, 50, 10, 5, 1};
    int N, temp, num = 0;
    scanf("%d", &N);
    N = 1000 - N;
    for (int i = 0; i < 6; i++)
    {
        temp = changes[i];
        num += N / temp;
        N %= temp;
        if (N == 0)
            break;
    }
    printf("%d\n", num);

    return 0;
}
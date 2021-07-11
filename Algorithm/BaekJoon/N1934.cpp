#include <stdio.h>
#include <iostream>
#include <algorithm>
#include <queue>
#include <string>
#include <cstring>

using namespace std;

priority_queue<int> pq;

int get_lcm(int a, int b);

int main()
{
    int a, b, temp, N, lcm[1000];
    scanf("%d", &N);
    for (int i = 0; i < N; i++)
    {
        scanf("%d %d", &a, &b);
        if (a < b)
        {
            temp = a;
            a = b;
            b = temp;
        }
        lcm[i] = get_lcm(a, b);
    }
    for (int i = 0; i < N; i++)
    {
        printf("%d\n", lcm[i]);
    }
}

int get_lcm(int a, int b)
{
    int temp;
    temp = a;
    for (int i = 2; temp % b != 0; i++)
    {
        temp = a * i;
    }
    return temp;
}
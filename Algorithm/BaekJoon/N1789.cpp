//서로 다른 N개의 자연수의 합이 S라고 한다. S를 알 때, 자연수 N의 최댓값은 얼마일까?
#include <bits/stdc++.h>

using namespace std;

int main()
{
    long N, result; //N의 범위가 1~4,294,967,295
    scanf("%ld", &N);
    //factorial = (n+1)*n/2;
    for (long i = 1; i * (i + 1) / 2 <= N; i++)
    {
        result = i;
    }
    printf("%ld", result);
}
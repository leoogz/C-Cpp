#include <stdio.h>
#include <cstdlib>
#include <iostream>
#include <algorithm>
#include <queue>
#include <set>
#include <string>
#include <cstring>
#include <vector>
#include <tuple>

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
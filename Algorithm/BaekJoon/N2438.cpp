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
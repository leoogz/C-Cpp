#include <stdio.h>
#include <cstdlib>
#include <iostream>
#include <algorithm>
#include <queue>
#include <set>
#include <string>
#include <cstring>

using namespace std;

int main()
{
    int start, end, prime_arr[1000001] = {0, 1};
    scanf("%d %d", &start, &end);
    for (int i = 2; i <= end; i++)
    {
        for (int j = 2; i * j <= end; j++)
        {
            prime_arr[i * j] = 1;
        }
    }

    for (int i = start; i <= end; i++)
    {
        if (prime_arr[i] == 0)
        {
            printf("%d\n", i);
        }
    }

    return 0;
}

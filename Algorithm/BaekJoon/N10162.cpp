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
    int T, result = 0, A = 0, B = 0, C = 0;
    scanf("%d", &T);
    if (T % 10 != 0)
    {
        printf("%d", -1);
    }
    else
    {
        result = T / 10;
        A = result / 30;
        B = (result % 30) / 6;
        C = result % 6;
        printf("%d %d %d", A, B, C);
    }
}
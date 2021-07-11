#include <stdio.h>
#include <iostream>
#include <algorithm>
#include <queue>
#include <string>
#include <cstring>

using namespace std;

//priority_queue<int> pq;

int get_gcd(int a, int b);
int get_lcm(int a, int b);

int main()
{
    int a, b, temp, gcd, lcm;
    scanf("%d %d", &a, &b);
    if (a < b)
    {
        temp = a;
        a = b;
        b = temp;
    }
    gcd = get_gcd(a, b);
    lcm = get_lcm(a, b);
    printf("%d\n", gcd);
    printf("%d\n", lcm);
}

int get_gcd(int a, int b)
{
    int mod;
    mod = 1;
    while (mod != 0)
    {
        mod = a % b;
        a = b;
        b = mod;
    }
    return a;
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
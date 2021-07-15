#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long n, num;
    while (cin >> n)
    {
        num = 1;
        int i = 1;
        while (1)
        {
            if (num % n == 0)
                break;
            num %= n;
            num = num * 10 + 1;
            i++;
        }
        printf("%d\n", i);
    }
    return 0;
}

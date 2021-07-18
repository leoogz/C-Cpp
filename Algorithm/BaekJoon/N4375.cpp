//2와 5로 나누어 떨어지지 않는 정수 n가 주어졌을 때, 1로만 이루어진 n의 배수를 찾는 프로그램을 작성하시오.
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

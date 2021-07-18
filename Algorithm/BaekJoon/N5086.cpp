//두 수가 주어졌을 때, 다음 3가지 중 어떤 관계인지 구하는 프로그램을 작성하시오.
//첫 번째 숫자가 두 번째 숫자의 약수이다.
//첫 번째 숫자가 두 번째 숫자의 배수이다.
//첫 번째 숫자가 두 번째 숫자의 약수와 배수 모두 아니다.
#include <bits/stdc++.h>

using namespace std;

priority_queue<int> pq;

int main()
{
    int a, b;
    while (1)
    {
        scanf("%d %d", &a, &b);
        if (a == 0 && b == 0)
            break;
        if (b % a == 0)
        {
            printf("factor\n");
        }
        else if (a % b == 0)
        {
            printf("multiple\n");
        }
        else
        {
            printf("neither\n");
        }
    }
}
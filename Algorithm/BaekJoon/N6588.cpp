//골드바흐의 추측.
//4보다 큰 짝수는 두개의 홀수인 소수의 합으로 나타낼 수 있다.
#include <bits/stdc++.h>

int main()
{
    int N;
    int prime_num[1000001] = {0, 1};

    for (int i = 2; i < 1000001; i++)
    {
        for (int j = 2; i * j <= 1000000; j++)
        {
            prime_num[i * j] = 1;
        }
    }

    while (1)
    {
        scanf("%d", &N);
        if (N == 0)
            break;
        else
        {
            int flag = 0;
            for (int i = 3; i < N; i++)
            {
                if (prime_num[i] == 0 && prime_num[N - i] == 0)
                {
                    printf("%d = %d + %d\n", N, i, N - i);
                    flag = 1;
                    break;
                }
            }
            if (!flag)
                printf("Goldbach's conjecture is wrong.\n");
        }
    }
    return 0;
}
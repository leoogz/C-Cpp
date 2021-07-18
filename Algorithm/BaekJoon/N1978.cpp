//소수 찾기
//주어진 수 N개 중에서 소수가 몇 개인지 찾아서 출력하는 프로그램을 작성하시오.
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int N, ans = 0;
    vector<int> v;
    scanf("%d", &N);
    int prime_arr[1001] = {0, 1};
    for (int i = 2; i < 1001; i++)
    {
        for (int j = 2; i * j < 1001; j++)
        { //2,3 등 소수인 수들의 배수들을 배제하는 것이기 때문에 j = 1이 아닌 j = 2부터 시작함.
            prime_arr[i * j] = 1;
        }
    }
    for (int i = 0; i < N; i++)
    {
        int temp;
        scanf("%d", &temp);
        v.push_back(temp);
    }
    for (int i = 0; i < N; i++)
    {
        if (prime_arr[v[i]] == 0)
            ans++;
    }
    printf("%d", ans);

    return 0;
}
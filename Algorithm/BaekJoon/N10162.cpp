//T초를 위한 최소버튼 조작의 A B C 횟수를 첫 줄에 차례대로 출력해야 한다. 각각의 횟수 사이에는 빈 칸을 둔다. 해당 버튼을 누르지 않는 경우에는 숫자 0을 출력해야한다.
//만일 제시된 3개의 버튼으로 T초를 맞출 수 없으면 음수 -1을 첫 줄에 출력해야 한다.
#include <bits/stdc++.h>

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
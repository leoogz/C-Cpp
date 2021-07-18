//배달하는 봉지의 최소 개수를 출력한다. 만약, 정확하게 N킬로그램을 만들 수 없다면 -1을 출력한다.
#include <bits/stdc++.h>

using namespace std;

#define LARGE_BAG 5
#define SMALL_BAG 3

int main()
{
    int sugar_weight, temp;
    int num_largebag, num_smallbag, num = 0;
    scanf("%d", &sugar_weight);
    while (1)
    {
        if (sugar_weight % 5 == 0)
        {
            num += sugar_weight / LARGE_BAG;
            break;
        }
        sugar_weight -= 3;
        if (sugar_weight < 0)
        {
            num = -1;
            break;
        }
        num++;
    }
    printf("%d\n", num);
    return 0;
}
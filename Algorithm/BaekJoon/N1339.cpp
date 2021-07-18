//GCF + ACDEB를 계산한다고 할 때, A = 9, B = 4, C = 8, D = 6, E = 5, F = 3, G = 7로 결정한다면, 두 수의 합은 99437이 되어서 최대가 될 것이다.
//N개의 단어가 주어졌을 때, 그 수의 합을 최대로 만드는 프로그램을 작성하시오
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int N;
    int Alpha[30] = {
        0,
    };
    priority_queue<int> pq;
    vector<string> v;
    string str;
    scanf("%d\n", &N);
    for (int i = 0; i < N; i++)
    {
        getline(cin, str);
        v.push_back(str);
    }
    for (int i = 0; i < N; i++)
    {
        string temp = v[i];
        for (int j = 0; j < v[i].length(); j++)
        {
            int a = temp[j] - 'A';
            int p = pow(10, temp.length() - j - 1);
            Alpha[a] += p;
        }
    }
    for (int i = 0; i < 'Z' - 'A' + 1; i++)
    {
        pq.push(Alpha[i]);
    }
    int num = 0;
    int weight = 9;
    for (int i = 0; i < 10; i++)
    {
        int temp = pq.top();
        num += temp * weight--;
        pq.pop();
    }
    printf("%d", num);
}
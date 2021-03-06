//선발할 수 있는 신입사원의 최대 인원수를 구하는 프로그램을 작성하시오.
#include <bits/stdc++.h>

using namespace std;

int find_max_candidate();

int main()
{
    vector<int> v;
    int N;
    scanf("%d", &N);
    for (int i = 0; i < N; i++)
    {
        v.push_back(find_max_candidate());
    }

    for (int i = 0; i < v.size(); i++)
    {
        printf("%d\n", v[i]);
    }
}

int find_max_candidate()
{
    priority_queue<pair<int, int>, vector<pair<int, int> >, greater<pair<int, int> > > pq;
    int num_candidate;
    scanf("%d", &num_candidate);
    for (int i = 0; i < num_candidate; i++)
    {
        int m, n;
        scanf("%d %d", &m, &n);
        pq.push(make_pair(m, n));
    }
    int num = num_candidate;
    int prev = pq.top().second;
    pq.pop();
    for (int i = 1; i < num_candidate; i++)
    {
        int temp = pq.top().second;
        if (prev < temp)
        {
            num--;
        }
        else
            prev = temp;
        pq.pop();
    }
    return num;
}
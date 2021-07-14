#include <stdio.h>
#include <cstdlib>
#include <iostream>
#include <algorithm>
#include <queue>
#include <set>
#include <string>
#include <cstring>
#include <vector>
#include <tuple>
#include <cmath>

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
#include <stdio.h>
#include <iostream>
#include <algorithm>
#include <queue>
#include <string>
#include <cstring>

using namespace std;

priority_queue<int> pq;

int main()
{
    int num = 0, temp, result = 0;
    int sign = 1;
    char sentence[50];
    scanf("%s", sentence);
    for (int i = 0; i < strlen(sentence); i++)
    {
        if (sentence[i] != '-' && sentence[i] != '+')
        {
            temp = sentence[i] - '0';
            num = num * 10 + temp;
        }
        else
        {
            result += sign * num;
            num = 0;
            if (sentence[i] == '-')
                sign = -1;
        }
    }
    result += sign * num;
    printf("%d", result);
    return 0;
}
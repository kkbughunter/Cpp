#include <bits/stdc++.h>
using namespace std;

void subarraySum(vector<int> arr, int n, long long s)
{
    int start = 0;
    long long current_sum = 0;

    for (int end = 0; end < n; ++end)
    {
        current_sum += arr[end];

        while (current_sum > s && start < end)
        {
            current_sum -= arr[start];
            ++start;
        }

        if (current_sum == s)
        {
            cout << start + 1 << " " << end + 1 << endl;
            return;
        }
    }

    cout << -1 << endl;
    return;
}

int main()
{
    subarraySum({1, 2, 3, 7, 5}, 5, 12);
    subarraySum({1, 1, 1, 1, 1}, 5, 12);
    subarraySum({1, 2, 3, 4, 5, 6, 7, 8, 9, 10}, 10, 15);
    subarraySum({1, 2, 3, 4, 5}, 5, 20);
    subarraySum({0}, 1, 0);
    subarraySum({5}, 1, 5);
    subarraySum({1, 2, 3, 4}, 4, 0);
    subarraySum({0, 0, 0, 0}, 4, 0); // 1 1
    subarraySum({1, 2, 3, 4, 5, 6, 7, 8, 9, 10}, 10, 15);
}
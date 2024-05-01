#include <bits/stdc++.h>
using namespace std;

void merge(vector<int> &nums1, int m, vector<int> &nums2, int n)
{
    for (int i = m; i < m + n; i++)
        nums1[i] = nums2[i - m];
    sort(nums1.begin(), nums1.end());
}

void display(vector<int> &nums1, int n, int m)
{
    for (int i = 0; i < n + m; i++)
        cout << nums1[i] << " ";
    cout << endl;
}

int main()
{
    vector<int> nums1 = {1, 2, 3, 0, 0, 0};
    vector<int> nums2 = {2, 5, 6};
    int n = 3;
    int m = 3;

    merge(nums1, 3, nums2, 3);
    display(nums1, n, m);
    
    return 0;
}
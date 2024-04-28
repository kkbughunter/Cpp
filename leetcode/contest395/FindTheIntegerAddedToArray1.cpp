// https://leetcode.com/problems/find-the-integer-added-to-array-i/description/

#include <bits/stdc++.h>
using namespace std;

int addedInteger(vector<int> &nums1, vector<int> &nums2)
{
    if (nums1.size() == 1)
        return nums2[0] - nums1[0];

    int min1 = nums1[0];
    int min2 = nums2[0];
    for (int i = 1; i < nums1.size(); i++)
    {
        if (min1 > nums1[i])
            min1 = nums1[i];
        if (min2 > nums2[i])
            min2 = nums2[i];
    }

    return min2 - min1;
}

int main()
{
    vector<int> nums1 = {2, 6, 4};
    vector<int> nums2 = {9, 7, 5};
    cout << addedInteger(nums1, nums2) << endl; // Output: 3

    nums1 = {10};
    nums2 = {5};
    cout << addedInteger(nums1, nums2) << endl; // Output: -5

    nums1 = {1, 1, 1, 1};
    nums2 = {1, 1, 1, 1};
    cout << addedInteger(nums1, nums2) << endl; // Output: 0

    return 0;
}

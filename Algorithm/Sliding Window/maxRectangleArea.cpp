#include <bits/stdc++.h>
using namespace std;

int maxRectangleArea(vector<int> &heights, int n, int k)
{
    int maxArea = 0;

    for (int left = 0; left < n; ++left)
    {
        int minHeight = heights[left];
        for (int right = left; right < n; ++right)
        {
            minHeight = min(minHeight, heights[right]);
            int width = right - left + 1;
            int area = minHeight * width;
            if (area <= k)
            {
                maxArea = max(maxArea, area);
            }
            else
            {
                break;
            }
        }
    }

    return maxArea == 0 ? -1 : maxArea;
}

int main()
{
    vector<int> heights1 = {1, 2, 3, 4, 5};
    int k1 = 8;
    int result1 = maxRectangleArea(heights1, heights1.size(), k1);
    cout << result1 << endl;

    vector<int> heights2 = {4, 6, 3, 5, 2, 7};
    int k2 = 20;
    int result2 = maxRectangleArea(heights2, heights2.size(), k2);
    cout << result2 << endl;

    vector<int> heights3 = {3, 1, 2, 4, 1};
    int k3 = 5;
    int result3 = maxRectangleArea(heights3, heights3.size(), k3);
    cout << result3 << endl;

    return 0;
}

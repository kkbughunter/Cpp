#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>

class Solution {
public:
    int findPermutationDifference(std::string s, std::string t) {
        // Sort both strings
        std::string sorted_s = s;
        std::string sorted_t = t;
        std::sort(sorted_s.begin(), sorted_s.end());
        std::sort(sorted_t.begin(), sorted_t.end());

        // Create a vector to store the original indices
        std::vector<int> svec(s.size());
        std::vector<int> tvec(t.size());

        for (int i = 0; i < s.size(); ++i) {
            svec[sorted_s[i]] = i;
            tvec[sorted_t[i]] = i;
        }

        int sum = 0;
        for (int i = 0; i < s.size(); ++i) {
            sum += std::abs(svec[s[i]] - tvec[t[i]]);
        }

        return sum;
    }
};

int main() {
    Solution solution;
    std::string s = "abc";
    std::string t = "bca";
    std::cout << "Permutation difference: " << solution.findPermutationDifference(s, t) << std::endl;
    return 0;
}

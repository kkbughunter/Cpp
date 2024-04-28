// https://leetcode.com/problems/merge-strings-alternately/description/

#include<bits/stdc++.h>
using namespace std;

string mergeAlternately(string word1, string word2) {
    string res;

    for (int i = 0; i < max(word1.length(), word2.length()); i++)
    {
        if(word1.length()) res.push_back(word1[i]);
        if(word2.length()) res.push_back(word2[i]);
    }
    return res;
}


int main()
{
    cout << mergeAlternately("abc", "pqr") << endl; // Output: "apbqcr"
    cout << mergeAlternately("ab", "pqrs") << endl;  // Output: "apbqrs"
    cout << mergeAlternately("abcd", "pq") << endl; // Output: "apbqcd"
    return 0;
}
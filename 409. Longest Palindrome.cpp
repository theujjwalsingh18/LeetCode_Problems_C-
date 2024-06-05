class Solution {
public:
    int longestPalindrome(string s) {
        unordered_map<char, int> umap;
        for (auto& c : s) {
            umap[c]++;
        }

        int result = 0;
        bool oddFound = false;

        for (auto& c : umap) {
            if (c.second % 2 == 0) {
                result += c.second;
            } else {
                oddFound = true;
                result += c.second - 1;
            }
        }

        if (oddFound) {
            result++;
        }

        return result;
    }
};
class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        int totalXOR =0;
        for(auto &num : nums){
            totalXOR ^= num;
        }
        int difference = (totalXOR ^ k);
        return __builtin_popcount(difference);
    }
};
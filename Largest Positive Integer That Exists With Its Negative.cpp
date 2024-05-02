class Solution {
public:
    int findMaxK(vector<int>& nums) {
        int result = -1;
        sort(nums.begin(), nums.end());
        int i = 0;
        int j = nums.size()-1;
        while (i < j) {
            if (-nums[i] == nums[j]) {
                return nums[j];
            } 
            else if (-nums[i] < nums[j]) { 
                j--;
            }
            else { 
                i++;
            }
        }
        return result;
    }
};
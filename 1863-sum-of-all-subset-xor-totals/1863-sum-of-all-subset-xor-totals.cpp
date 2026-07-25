class Solution {
public:
    int subsetXORSum(vector<int>& nums) {
      int totalOR = 0;
        for (int num : nums) {
            totalOR |= num;
        }
        return totalOR << (nums.size() - 1);
    }
};
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int count = 0;
        int assumedMajority;
        for (int i = 0; i < nums.size(); i++) {
            if (count == 0) {
                count = 1;
                assumedMajority = nums[i];
            } else if (nums[i] == assumedMajority)
                count++;
            else
                count--;
        }
        return assumedMajority;
    }
};
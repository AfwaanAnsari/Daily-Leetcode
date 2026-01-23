class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int positiveIndex = 0, negativeIndex = 1;
        vector<int> answer(nums.size());
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] < 0) {
                answer[negativeIndex] = nums[i];
                negativeIndex += 2;
            } else {
                answer[positiveIndex] = nums[i];
                positiveIndex += 2;
            }
        }
        return answer;
    }
};
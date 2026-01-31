class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        vector<vector<int>> result;
        int n = nums.size();
        if (n < 4) return result;

        sort(nums.begin(), nums.end());

        for (int first = 0; first < n - 3; first++) {
            if (first > 0 && nums[first] == nums[first - 1]) continue;

            for (int second = first + 1; second < n - 2; second++) {
                if (second > first + 1 && nums[second] == nums[second - 1]) continue;

                int left = second + 1;
                int right = n - 1;

                while (left < right) {
                    long long currentSum = (long long) nums[first] + nums[second] + nums[left] + nums[right];

                    if (currentSum == target) {
                        result.push_back({
                            nums[first],
                            nums[second],
                            nums[left],
                            nums[right]
                        });

                        while (left < right && nums[left] == nums[left + 1]) left++;
                        while (left < right && nums[right] == nums[right - 1]) right--;

                        left++;
                        right--;
                    }
                    else if (currentSum < target) {
                        left++;
                    }
                    else {
                        right--;
                    }
                }
            }
        }
        return result;    
    }
};

class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> us;
        for (int num : nums) {
            us.insert(num);
        }
        int streak = 0, maxStreak = 0, current;
        for (int num : us) {
            if (us.find(num - 1) == us.end()) {
                current = num;
                streak = 1;
                while (us.find(current + 1) != us.end()) {
                    current++;
                    streak++;
                }
                maxStreak = max(streak, maxStreak);
            }
        }
        return maxStreak;
    }
};
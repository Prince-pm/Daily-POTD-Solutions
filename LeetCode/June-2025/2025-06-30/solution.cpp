class Solution {
public:
    int findLHS(vector<int>& nums) {
        unordered_map<int, int> freq;
        int maxLength = 0;


        // Count the frequency of each number
        for (int num : nums) {
            freq[num]++;
        }

        // Check for pairs where key+1 exists
        for (auto& [key, value] : freq) {
            if (freq.count(key + 1)) {
                maxLength = max(maxLength, value + freq[key + 1]);
            }
        }

        return maxLength;
    }
};
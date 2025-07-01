class Solution {
public:
    int possibleStringCount(string word) {
        int n = word.length();
        int total = 0;
        vector<pair<char, int>> groups;

        // Step 1: Group consecutive characters
        for (int i = 0; i < n; ) {
            int j = i;
            while (j < n && word[j] == word[i]) j++;
            groups.push_back({word[i], j - i});
            i = j;
        }

        // Step 2: Try reducing at most one group (if count > 1)
        // Each group with length >= 2 gives (len - 1) possible reductions
        total = 1; // Include the original string itself
        for (auto& g : groups) {
            if (g.second >= 2) {
                total += (g.second - 1);
            }
        }

        return total;
    }
};
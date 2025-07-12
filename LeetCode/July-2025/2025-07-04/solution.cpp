class Solution {
public:
    char kthCharacter(long long k, vector<int>& operations) {
        int n = operations.size();
        vector<long long> lengths(n + 1);
        lengths[0] = 1;

        // Step 1: Precompute lengths after each operation
        for (int i = 0; i < n; ++i) {
            lengths[i + 1] = min(lengths[i] * 2, k);  // Limit to k to avoid overflow
        }

        int shift = 0;

        // Step 2: Reverse simulate operations
        for (int i = n - 1; i >= 0; --i) {
            long long half = lengths[i];
            if (k > half) {
                k -= half;
                if (operations[i] == 1) {
                    shift = (shift + 1) % 26;
                }
            }
        }

        // Step 3: Final character is 'a' with shifts applied
        return 'a' + shift;
    }
};
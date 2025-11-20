class Solution {
public:
    int countBits(int mask) {
        int bitCount = 0;
        while (mask) {
            bitCount++;
            mask &= (mask - 1);
        }
        return bitCount;
    }

    bool solve(int mask, int target, int n, vector<int>& dp) {
        if (target <= 0) {
            return dp[mask] = (countBits(mask) % 2 != 0);
        }
        if (dp[mask] != -1) {
            return dp[mask];
        }

        int bitsUsed = countBits(mask);
        bool currentPlayerWins = (bitsUsed % 2 != 0);

        for (int i = 0; i < n; i++) {
            if (mask & (1 << i)) {
                continue;
            }

            int newMask = mask | (1 << i);
            if ((bitsUsed % 2 != 0 && !solve(newMask, target - i - 1, n, dp)) ||
                (bitsUsed % 2 == 0 && solve(newMask, target - i - 1, n, dp))) {
                return dp[mask] = !currentPlayerWins;
            }
        }

        return dp[mask] = bitsUsed&1;
    }

    bool canIWin(int n, int target) {
        if (target == 0) {
            return true;
        }
        if (target > (n * (n + 1)) / 2) {
            return false;
        }
        vector<int> dp(1 << n, -1);
        return solve(0, target, n, dp);
    }
};
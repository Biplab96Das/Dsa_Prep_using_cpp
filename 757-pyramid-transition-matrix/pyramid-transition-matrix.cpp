class Solution {
    int T[7][7];
    unordered_set<long long> seen;

public:
    bool pyramidTransition(string bottom, vector<string>& allowed) {
        for (int i = 0; i < 7; ++i)
            for (int j = 0; j < 7; ++j)
                T[i][j] = 0;

        for (const string& a : allowed)
            T[a[0] - 'A'][a[1] - 'A'] |= 1 << (a[2] - 'A');

        seen.clear();
        int N = (int)bottom.size();
        vector<vector<int>> A(N, vector<int>(N, 0));
        int t = 0;
        for (char c : bottom)
            A[N - 1][t++] = c - 'A';

        return solve(A, 0LL, N - 1, 0);
    }

private:
    bool solve(vector<vector<int>>& A, long long R, int N, int i) {
        if (N == 1 && i == 1) {
            return true;
        } else if (i == N) {
            if (seen.count(R)) return false;
            seen.insert(R);
            return solve(A, 0LL, N - 1, 0);
        } else {
            int w = T[A[N][i]][A[N][i + 1]];
            for (int b = 0; b < 7; ++b) {
                if (((w >> b) & 1) != 0) {
                    A[N - 1][i] = b;
                    if (solve(A, R * 8 + (b + 1), N, i + 1)) return true;
                }
            }
            return false;
        }
    }
};
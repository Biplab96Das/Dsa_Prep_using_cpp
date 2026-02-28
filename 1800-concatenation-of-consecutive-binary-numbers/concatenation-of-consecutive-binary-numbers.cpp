class Solution {
public:
    int concatenatedBinary(int n) {
        int const mod = 1e9 + 7;
        long ans = 0;
        int bit;
        for(int i=1;i<=n;++i)
        {   
            bit = floor(log2(i)) + 1;
            ans = ((ans << bit) | i )% mod ;
        }
        return ans;
    }
};
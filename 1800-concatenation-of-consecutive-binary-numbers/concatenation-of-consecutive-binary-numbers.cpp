class Solution {
public:
    int concatenatedBinary(int n) {
        int const mod = 1e9 + 7;
        long ans = 0;
        for(int i=1;i<=n;++i)
        {
            ans = (ans << ((32 - __builtin_clz(i))) | i )% mod ;
        }
        return ans;
    }
};
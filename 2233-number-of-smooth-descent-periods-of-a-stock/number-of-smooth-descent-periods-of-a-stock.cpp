class Solution {
public:
    long long getDescentPeriods(vector<int>& prices) {
        long long ans = 1;
        int n=prices.size();
        int count=1;
        for(int i=1;i<n;++i)
        {
            
            if(prices[i-1]-prices[i]==1)
                 {
                    ++count;
                 }
            else
                count=1;   
            ans += count;      
        }
        return ans;
    }
};
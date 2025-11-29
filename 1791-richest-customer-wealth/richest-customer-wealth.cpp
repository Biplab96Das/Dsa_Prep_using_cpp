class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int maxwealth=0;
        for(auto &customer:accounts)
        {
            int sum=0;
            for(int money:customer)
            {
                sum += money;
            }
            maxwealth = max(sum,maxwealth);
        }
        return maxwealth;
    }
};
class Solution {
public:
    int countPartitions(vector<int>& nums) {
        vector<int>subSum(nums.size());
        int currSum=0;
        for(int i=0;i<nums.size();++i)
        {
            currSum += nums[i];
            subSum[i] = currSum;
        }
        int total = currSum;
        int ans = 0;
        for(int i=0;i<nums.size()-1;++i)
        {
           if(abs(total - 2*subSum[i]) % 2 == 0)
              ++ans;
        }
        return ans;
    }
};
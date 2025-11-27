class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int min_length=INT_MAX;
        int currSum=0;
        int start=0;
        for(int end=0;end<nums.size();++end)
        {
            currSum += nums[end];
            while(currSum >= target)
            {
               min_length=min(min_length,end-start+1);
               currSum -= nums[start];
               start += 1;
            }
        }
        if(min_length==INT_MAX)
           return 0;
        return min_length;
    }
};
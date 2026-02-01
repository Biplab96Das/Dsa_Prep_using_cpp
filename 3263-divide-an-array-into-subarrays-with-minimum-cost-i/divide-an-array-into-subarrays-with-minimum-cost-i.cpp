class Solution {
public:
    int minimumCost(vector<int>& nums) {
        int n=nums.size();
        int min=nums[1],smin=INT_MAX;
        int ans = nums[0];
        for(int i=2;i<n;++i)
        {
            if(nums[i]<min)
            {
                smin = min;
                min = nums[i];
                
            }
            else if(nums[i]>=min && nums[i]<smin)
            {
                smin = nums[i];
            }
        }
        cout<<ans<<" "<<min<<" "<<smin;
        ans += min + smin;
        return ans;
    }
};
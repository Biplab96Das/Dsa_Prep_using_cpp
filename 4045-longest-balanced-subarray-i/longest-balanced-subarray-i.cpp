class Solution {
public:
    int longestBalanced(vector<int>& nums) {
        int max_len = 0;
        
        for(int i=0;i<nums.size();++i)
        {  
           unordered_set<int> odd;
           unordered_set<int> even;
           for(int j=i;j<nums.size();++j)
           { 
            if(nums[j]&1)
            {
              odd.insert(nums[j]);
            }
            else
            {
              even.insert(nums[j]);
            }
            if(odd.size()==even.size() )
            {
              max_len = max(max_len,j-i+1);
            }
           } 
            
        }
       return max_len;   
    }
};
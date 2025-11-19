class Solution {
public:
    int findLucky(vector<int>& arr) {
        unordered_map<int,int>hash;
        for(auto it : arr)
        {
            hash[it]++;
        }
        int ans = -1;
        for(auto it : hash)
        {
           if(it.first==it.second)
           {
              ans = max(ans,it.first);
           } 
        }
        return ans;
    }
};
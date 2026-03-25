using ll = long long;
class Solution {
public:
    bool canPartitionGrid(vector<vector<int>>& grid) {
        ll s = 0;
        for(const auto &row : grid)
        {
            for(auto x: row)
            {
                s += x;
            }
        }
        if(s & 1) return false;
        int m = grid.size(), n = grid[0].size();
        ll pre = 0;
        for(int i=0;i<m;++i)
        {
            for(auto x : grid[i])
               pre += x;
            if(pre*2 == s && (i+1)<m )
               return true;   
        }
        pre = 0;
        for(int j=0;j<n;++j)
        {
            for(int i=0;i<m;++i)
              pre += grid[i][j];
            if(pre*2 == s && (j+1)<n)
              return true;   
        }

        return false;

    }
};
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
/* We traverse left to right in a row and row by row in top-down to get total sum of all elements in grid, i.e. s
Next see if s is odd we can not partition it into two half, in that case return fasle;
Next taking rows sum(1st row, 1st+2nd rows, 1st+2nd+3rd rows, etc)and see if it is  half of s, if we get half of s that means it the the correct partition. Return true.
Same thing we do for column, from left to right see group of columns is half of s or not, if it is half we get our partition. Return true.
Lastly we see such row wise or column wise partition not present so return false.
*/
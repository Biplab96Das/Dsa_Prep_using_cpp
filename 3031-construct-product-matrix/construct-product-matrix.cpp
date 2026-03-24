using ll = long long;
const int mod = 12345;
class Solution {
public:
    vector<vector<int>> constructProductMatrix(vector<vector<int>>& grid) {
        int n=grid.size(),m=grid[0].size();ll ans=1;
        vector<vector<int>>p(n,vector<int>(m));
        for(int i=n-1;i>=0;--i)
          for(int j=m-1; j>=0;--j){
             p[i][j] = ans;
             ans = ans*grid[i][j]%mod;
             }     
        ll mult = 1;
        for(int i=0;i<n;++i)
          for(int j=0;j<m;++j){
             p[i][j] = p[i][j] * mult % mod;
             mult = mult * grid[i][j] % mod;}
        return p;          
    }
};
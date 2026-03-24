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

/* the idea is moving last element to first in reverse row wise this will put 
row wise product except the correspong grid element, for ex: p[i][j] will have multiple 
of all elements to its right columns in jth row and all down rows meaning for All k,i.e i<k<n
Next loops are doing it opposite so that we get all previous elements other than corresponding element. Diagramatically we can depict the multiplications:
____         ____
|--->>----->>---|
|-------->>-----|
|-->>----(*)--<-|  so, We do multiplication in '<' direcxtion, then in '>>' in this direction.
|---<----<------|      (*) is the p[i][j]; it is multiplications of all elements other than 
|---<----<------|          grid[i][j]
|____        ___| (n x m)                                
*/
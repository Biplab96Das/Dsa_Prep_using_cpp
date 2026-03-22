class Solution {
public:
    bool findRotation(vector<vector<int>>& mat, vector<vector<int>>& target) {
        int n = mat.size();
        for(int i=0;i<4;++i)
        {
            vector<vector<int>>g(n,vector<int>(n));
            for(int j=0;j<n;++j)
              for(int k=0;k<n;++k)
                g[j][k] = mat[k][n-1-j];
            if(g == target)
               return true;
            mat = g;       
        }
        return false;
    }
};
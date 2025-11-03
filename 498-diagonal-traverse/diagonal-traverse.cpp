class Solution {
public:
    vector<int> findDiagonalOrder(vector<vector<int>>& mat) {
        vector<int> order;

        int rows = mat.size();
        int cols = mat[0].size();
        int dir = 0;
        vector<vector<int>> dirs = {{-1, 1}, {1, -1}};
        int row = 0, col = 0;

        for (int i = 0; i < rows*cols; i++) {
            order.push_back(mat[row][col]);

            int currRow = row + dirs[dir][0];
            int currCol = col + dirs[dir][1];

            if (currRow >= 0 && currRow < rows && 
                currCol >= 0 && currCol < cols) {
                row = currRow;
                col = currCol;
            } else if (currRow >= rows ) {
                dir = (dir+1)%2;
                col = col+1;
            } else if (currCol >= cols ) {
                dir = (dir+1)%2;
                row = row+1;
            } else if (currRow < 0) {
                dir = (dir+1)%2;
                col = col+1;
            } else if (currCol < 0 ) {
                dir = (dir+1)%2;
                row = row+1;
            }
        }

        return order;
    }
};
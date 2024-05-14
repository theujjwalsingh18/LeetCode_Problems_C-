class Solution {
public:
vector<vector<int>> directions{{-1,0}, {1,0}, {0,1}, {0,-1}};
    int dfs(vector<vector<int>>& grid,int m, int n, int i , int j){
        if(i >= m || i <0 || j >= n || j<0 || grid[i][j]==0){
            return 0;
        }

        int originalGold = grid[i][j];
        grid[i][j]=0;
        int maxGold = 0;
        for(vector<int>& dir : directions){
            int new_i = i + dir[0];
            int new_j = j + dir[1];

            maxGold = max(maxGold, dfs(grid,m, n, new_i, new_j));
        }
        grid[i][j]=originalGold;

        return originalGold + maxGold;
    }

    int getMaximumGold(vector<vector<int>>& grid) {
        int m = grid.size();
        int n = grid[0].size();
        int maxGold = 0;

        for (int i = 0; i<m; i++){
            for(int j = 0; j<n; j++){
                if(grid[i][j]!=0){
                    maxGold = max(maxGold, dfs(grid,m, n, i ,j));
                }
            }
        }
        return maxGold;
    }
};
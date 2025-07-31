class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int n=matrix.size();
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){//i+1 avoids redundant swaps and  with diagonals
            /*
            i = 0, j = 1 → swap(0,1) with (1,0) ✅
            i = 1, j = 0 → swap(1,0) with (0,1) ❌ ← This undoes the first swap!
            i = 0, j = 2 → swap(0,2) with (2,0)
            i = 2, j = 0 → swap(2,0) with (0,2) ❌ Again, undoing it
            i = 1, j = 2 → swap(1,2) with (2,1)
            i = 2, j = 1 → swap(2,1) with (1,2) ❌
            */
                swap(matrix[i][j],matrix[j][i]);//finds transpose of matrix 
            }
        }
        //reverse each row to find the rotate image
        for(int i=0;i<n;i++){
            reverse(matrix[i].begin(),matrix[i].end());
        }
    }
};
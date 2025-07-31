class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int n=matrix.size();
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){//i+1 avoids redundant swaps and  with diagonals
                swap(matrix[i][j],matrix[j][i]);//finds transpose of matrix 
            }
        }
        //reverse each row to find the rotate image
        for(int i=0;i<n;i++){
            reverse(matrix[i].begin(),matrix[i].end());
        }
    }
};
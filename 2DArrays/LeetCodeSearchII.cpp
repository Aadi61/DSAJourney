class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int row=0;
        int col=matrix[0].size()-1;
        while(row<matrix.size() && col>=0){
            int a=matrix[row][col];
            if(a==target){
                return 1;
            }
            if(a>target){
                col--;
            }
            else{
                row++;
            }
        }
        return 0;
        
        
    }
};
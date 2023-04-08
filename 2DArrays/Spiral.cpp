class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int endRow=matrix.size()-1;
        int startRow=0;
        int endCol=matrix[0].size()-1;
        int startCol=0;
        int n=endRow*endCol;
        int count=0;
        vector<int> ans;
        while(n>count){
            for(int i=startCol;i<=endCol && count<n;i++){
                ans.push_back(matrix[startRow][i]);
                count++;
            }
            startRow++;
                
            for(int i=startRow;i<=endRow && count<n;i++){
                ans.push_back(matrix[endCol][i]);
                
                count++;
            }
            endCol--;
            for(int i=endCol;i>=startCol && count<n;i--){
                ans.push_back(matrix[endRow][i]);
                
                count++;
            }
            endRow--;
            for(int i=endRow;i>=startRow && count<n;i--){
                ans.push_back(matrix[startCol][i]);
                
                count++;
            }
            startCol--;
        }
        return ans;
    }
};
class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        
        int i=matrix.size();
        int j=matrix[0].size();
        int a=0;
        int b=0;
        vector<vector<int>> temp(i, vector<int>(j, 0));
        for(int n=i-1;n>=0;n--){
            
        
            for(int m=0;m<j;m++){
                
                temp[a][b]=matrix[n][m];
                b++;
            }
            a++;
        }
        for (int n=0;n<i;n++){
            for(int m=0;m<j;m++){
                matrix[n][m]=temp[n][m];
            }
        }
    }
};
class Solution {
public:

    void Recursion(vector<int> nums,vector<int> output,int index,vector<vector<int>> &ans){
        if(index>=nums.size()){
            ans.push_back(output);
            return;
        }
        Recursion(nums,output,index+1,ans);

        int n=nums[index];
        output.push_back(n);
        Recursion(nums,output,index+1,ans);
    }
    vector<vector<int>> subsets(vector<int>& nums) {
            vector<vector<int>> ans;
            vector<int> output;
            int index=0;
            Recursion(nums,output,index,ans);
            return ans;
    }
};
class Solution {
public:
    void Permutation(vector<int> nums,vector<vector<int>> &ans,int index){
        if(index==nums.size()){
            ans.push_back(nums);
            return;
        }
        for(int i=index;i<nums.size();i++){
            swap(nums[i],nums[index]);
            Permutation(nums,ans,index+1);
            swap(nums[i],nums[index]);
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        int index=0;
        vector<vector<int>> ans;
        Permutation(nums,ans,index);
        return ans;
    }
};
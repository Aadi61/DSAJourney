
class Solution {
public:

    vector<int> findDuplicates(vector<int>& nums) {
            if(nums.empty())
             return {};
        
        vector<int> answer;
        
        sort(nums.begin(),nums.end());
        
        int ans= nums[0];
        
        for(int i=1;i<nums.size();i++){
            //using XOR
            if((ans^nums[i])==0){
                answer.push_back(nums[i]);
            }
            ans=nums[i];
        }
        return answer;
    }  
    
};
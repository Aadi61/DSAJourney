class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
       int ans=0;
       int min=INT_MAX;
       int n=nums.size();
       sort(nums.begin(),nums.end());
       for(int i=0;i<n;i++){
           int l=i+1;
           int r=n-1;
           while(l<r){
               int sum=nums[i]+nums[l]+nums[r];
               int diff=abs(target-sum);
               if(diff<min){
                   min=diff;
                   ans=sum;
               }
               if(sum==target){
                   return sum;
               }
               else if(sum<target){
                   l++;
               }
               else{
                   r--;
               }
           }
       }
       return ans;
    }
};
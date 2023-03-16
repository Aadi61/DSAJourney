#include<iostream>
#include<vector>
using namespace std;
vector<int> findArrayIntersection(vector<int> &arr1, int n, vector<int> &arr2, int m)
{
	int i = 0, j = 0;
    vector<int> ans;
    while(i<n && j<m) {
    
    if(arr1[i]==arr2[j])
    {
    	ans.push_back(arr1[i]);
        i++;
        j++;
    }
    else if (arr1[i] < arr2[j]) {
  		i++;
    }
    else
    {
    	j++;
    }
    
    }
    return ans;
}
int main(){
    vector<int> arr1={2,3,4,5,6,7,8};
    vector<int> arr2={3,3,5,5,6,7,7};
    vector<int> ans=findArrayIntersection(arr1,7,arr2,6);
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<"\n";
    }
}
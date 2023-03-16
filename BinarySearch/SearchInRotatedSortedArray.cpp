#include<iostream>
#include<vector>
using namespace std;
int pivot(vector<int>& arr,int n){
    int s=0;
    int e=n-1;
    int mid=s+(e-s)/2;
    while(s<e){
        if(arr[mid]>=arr[mid-1]){
            s=mid+1;
        }
        else{
            e=mid;
        }
        mid=s+(e-s)/2;
    }
    return mid;
}
int BinarySearch(vector<int>& arr,int n,int k,int s,int e){
    
    int mid=s+(e-s)/2;
    while(s<=e){
        if(arr[mid]>k){
            e=mid-1;
        }
        else if(arr[mid]>k){
            s=mid+1;
        }
        mid=s+(e-s)/2;
    }
    return mid;
}
int findPosition(vector<int>& arr, int n, int k)
{
    // Write your code here.
    // Return the position of K in ARR else return -1.
    int ans=-1;
    int piv=pivot(arr, n);
    if(k>=arr[piv] && k<arr[n]){
        ans=BinarySearch(arr,n,k,piv,n-1);
    }
    else if(k>arr[0]&&k<arr[piv-1]){
        ans=BinarySearch(arr, n, k, 0, piv-1);
    }
    else if(arr[piv]==k){
        ans=piv;
    }
    
    return ans;
}
int main(){
    vector<int> arr={2,3,8,1};
    int ans=findPosition(arr,4,3);
    std::cout<<ans;
}
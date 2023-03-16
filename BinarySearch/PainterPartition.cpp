#include<vector>
using namespace std;
bool soloution(vector<int> &arr,int k,int mid){
    int painter=1;
    int sum=0;
    for(int i=0;i<arr.size();i++){
        if((arr[i]+sum)<=mid){
            sum+=arr[i];
        }
        else{
            painter++;
            if(painter>k || arr[i]>mid){
                return false;
            }
            sum=arr[i];
        }
    }
    return true;
}
// int BinarySearch(vector<int> &arr,int k){
//     int s=o;
//     int e=arr.size()-1;
//     int mid=s+(e-s)/2;
//     while(s<=e){
//         if(arr[mid]==k){
//             return mid;
//         }
//         else if(arr[mid]>k){
//             e=mid-1;
//         }
//         else{
//             s=mid+1;
//         }
//         mid=s+(e-s)/2;
//     }
//     return -1;

int findLargestMinDistance(vector<int> &boards, int k)
{
    //    Write your code here.
    int sum=0;
    for(int i=0;i<boards.size();i++){
        sum+=boards[i];
    }
    
    int s=0;
    int e=sum;
    int mid=s+(e-s)/2;
    while(s<=e){
        if(soloution(boards, k, mid)){
            e=mid-1;
        }
        else{
            s=mid+1;
        }
        mid=s+(e-s)/2;
    }
 return mid;
}
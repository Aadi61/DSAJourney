#include<iostream>
using namespace std;
int main(){
    int arr[10]={1,1,2,3,3,5,6,7,7,8};
    int s=0;
    int e=10-1;
    int mid=e+(s-e)/2;
    int ans;
    while(s<=e){
        if(arr[mid]==8){
            ans=mid;
            break;
        }
        else if(arr[mid]>8){
            e=mid-1;
        }
        else{
            s=mid+1;
        }
        mid=e+(s-e)/2;

    }
    std::cout<<"Index of 8 is at "<<ans;
    return 0;
}
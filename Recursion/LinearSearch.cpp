#include<iostream>
using namespace std;
bool LinearSearch(int arr[],int n,int ans){
    if(n==0){
        return false;
    }
    if(arr[0]==ans){
        return true;
    }
    else{
        return LinearSearch(arr+1,n-1,ans);
    }
}
int main(){
    int arr[5]={3,6,2,8,4};
    int num=8;
    bool check=LinearSearch(arr,5,num);
    cout<<check;

}
#include<iostream>
using namespace std;
bool Sorted(int arr[],int n){
    if(n==0){
        return true;
    }
    if(n==1){
        return true;
    }
    if(arr[0]>arr[1]){
        return false;
    }
    else{
        return Sorted(arr+1,n-1);
    }
}
int main(){
    int arr[5]={3,5,6,7,9};
    int Check=Sorted(arr,5);
    cout<<Check;

}
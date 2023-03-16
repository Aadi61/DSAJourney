#include<iostream>
using namespace std;
int findUnique(int *arr, int size)
{
   	int ans = 0;
    
    for(int i = 0; i<size; i++) {
        ans = ans^arr[i];
    }
    return ans;
}
int main(){
    int arr[5]={2,2,5,6,6};
    std::cout<<findUnique(arr,5);
}
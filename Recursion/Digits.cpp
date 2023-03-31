#include<iostream>
using namespace std;
void Dig(int n,string arr[]){
    if(n==0){
        return;
    }
    
    int digit=n%10;
    n=n/10;
    Dig(n,arr);
    cout<<arr[digit]<<" ";
    
}
int main(){
    int n=672;
    string arr[10]={"zero","one","two","three","four","five","six","seven","eight","nine"};
    Dig(n,arr);
    
}
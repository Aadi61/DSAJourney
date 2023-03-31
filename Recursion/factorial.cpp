#include<iostream>
using namespace std;

int Fact(int n){
    if(n==0){
        return 1;
    }
    return n*Fact(n-1);
}
int main(){
    int n=6;
    int fact=Fact(n);
    cout<<fact;
}
#include<iostream>
using namespace std;
int Power(int a,int b){
    if(b==0){
        return 1;
    }
    if(b==1){
        return a;
    }
    cout<<"Before recursion " <<a<<" "<<b<<endl;
    int ans=Power(a,b/2);
    cout<<"After recusrion "<<a<<" "<<b<<" "<<ans<<endl;
    if(b%2==0){
        return ans*ans;
    }
    else{
        return a*ans*ans;
    }
    
}
int main(){
    cout<<Power(2,8);
}
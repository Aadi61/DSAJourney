#include<iostream>
using namespace std;
void Reverse(string& s,int i, int j){
    
    if(i>j){
        return ;
    }
    
    swap(s[i],s[j]);
    i++;
    j--;
    
    return Reverse(s,i,j);
    
}

int main(){
    string s="abcdef";
    Reverse(s,0,s.length()-1);
    std::cout<<s;
}
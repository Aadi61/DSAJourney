#include <bits/stdc++.h> 

void Recursion(string str,vector<string> &ans,int index,string output){
	if(index>=str.length()){
		if(output==""){
			return;
		}
		ans.push_back(output);
		return;
	}
	Recursion(str,ans,index+1,output);

	char st=str[index];
	output.push_back(st);
	Recursion(str,ans,index+1,output);
}
vector<string> subsequences(string str){
	
	// Write your code here
	vector<string> ans;
	string output="";
	int index=0;
	Recursion(str,ans,index,output);
	return ans;
}

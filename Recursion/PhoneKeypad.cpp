class Solution {
public:

    void Recursion(string digits,string keys[],vector<string> &ans,string output,int index){
        if(index>=digits.length()){
            ans.push_back(output);
            return;
        }
        int n=digits[index]-'0';
        string value= keys[n];
        for(int i=0;i<value.length();i++){
            output.push_back(value[i]);
            Recursion(digits,keys,ans,output,index+1);
            output.pop_back();
        }
    }
    vector<string> letterCombinations(string digits) {
         vector<string> ans;
        if(digits.length()==0){
         return ans;   
        }
        string keys[]={"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
        int index=0;
       
        string output;
    
        Recursion(digits,keys,ans,output,index);
        return ans;
    }
};
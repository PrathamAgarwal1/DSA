class Solution {
public:
    string removeOuterParentheses(string s) {
        string result="";
        int count=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='('){
                if(count>0){
                    result+=s[i];
                }
                count+=1;

            }
            else if(s[i]==')'){
                count-=1;
                if(count>0){
                    result+=s[i];
                }
                
            }
        }
        return result;
    }
};
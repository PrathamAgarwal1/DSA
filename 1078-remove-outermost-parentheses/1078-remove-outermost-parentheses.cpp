class Solution {
public:
    string removeOuterParentheses(string s) {
        vector <char> chars;
        for (int i = 0; i < s.length(); ++i) {
            chars.push_back(s[i]);
        }
        string result="";
        int count=0;
        int n=chars.size();
        for(int i=0;i<n;i++){
            char current=chars[i];
            if(chars[i]=='('){
                if(count>0){
                    result+=current;
                }
                count+=1;
            }
            else if(chars[i]==')'){
                count-=1;
                if(count>0){
                    result+=current;
                }
                
            }
        }
        return result;
    }
};
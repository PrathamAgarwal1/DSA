class Solution {
public:
    int myAtoi(string s) {
        int i = 0;
        int sign = 1;
        long result = 0;
        while(s[i]==32){//for whitespace
            i++;
        }
        if(s[i]==43 || s[i]==45){//for sign
            if(s[i]==43){
                sign=1;
                
            }
            else{
                sign=-1;

            }
            i++;
        }
        while(s[i]>=48 && s[i]<=57){
            int digit=s[i]-48;
            result=(result*10)+digit;
            if(sign==1 && result>INT_MAX) return INT_MAX;
            if(sign==-1 && -result<INT_MIN) return INT_MIN;
            i++;
        }
        
        return sign*result;
    }
        
    
};
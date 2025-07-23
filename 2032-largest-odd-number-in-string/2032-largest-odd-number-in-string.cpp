class Solution {
public:
    string largestOddNumber(string num) {
        
        for(int i=num.size()-1;i>=0;i--){   
            char ch=num[i];
            if(ch=='1'||ch=='3'||ch=='5'||ch=='7'||ch=='9'){
                return num.substr(0,i+1);//i+1 is the length
            }
        }
        return "";
        
    }
};
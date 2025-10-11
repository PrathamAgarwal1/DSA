class Solution {
public:
    string largestOddNumber(string num) {
        for(int i=num.size();i>=0;i--){
            char ch=num[i];
            if(ch=='1'||ch=='3'||ch=='5'||ch=='7'||ch=='9'){
                return num.substr(0,i+1);//returns the substring from index 0 up to index i. peeche se start kia taaki longest odd number jo hota voh return hojaata
            }
        }
        return "";
    
    }
};
class Solution {
public:
    int romanToInt(string s) {
        unordered_map<char,int>rtoi;
        rtoi['I']=1;
        rtoi['V']=5;
        rtoi['X']=10;
        rtoi['L']=50;
        rtoi['C']=100;
        rtoi['D']=500;
        rtoi['M']=1000;
        int result=0;
        for(int i=0;i<s.size();i++){
            if(i+1<s.length() && rtoi[s[i]]<rtoi[s[i+1]]){
                result-=rtoi[s[i]];
            }
            else{//if next is not less that this just simply add 
                result+=rtoi[s[i]];
            }
        }
        return result;

    }
};
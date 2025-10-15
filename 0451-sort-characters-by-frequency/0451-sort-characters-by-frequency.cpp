class Solution {
public:
    string frequencySort(string s) {
        unordered_map <char,int> hashmapp;
        for(int i=0;i<s.size();i++){
            hashmapp[s[i]]+=1;
        }
        string ans="";
        while(ans.length()<s.length()){
            char maxChar='\0';
            int maxFreq=0;
            for(auto it :hashmapp){
                if(it.second>maxFreq){
                    maxFreq=it.second;
                    maxChar=it.first;
                }
            }
            for(int i=0;i<maxFreq;i++){
                ans+=maxChar;
            }
            hashmapp[maxChar]=0;//sets maxChar to 0 taaki waapis check naa ho
        }
        return ans;
        

    }
};
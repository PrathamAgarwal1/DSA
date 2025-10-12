class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string ans="";
        sort(strs.begin(),strs.end());
        int n=strs.size();
        string first=strs[0];
        string last=strs[n-1];//Why only compare 1st and last after sorting most that differ is first and last
        for(int i=0;i<min(first.size(),last.size());i++){//jiska size chota hoga utne tak hi traverse krne ka matlab hai
            if(first[i]!=last[i]){
                return ans;
            }
            ans+=first[i];
        }
        return ans;
    }
};
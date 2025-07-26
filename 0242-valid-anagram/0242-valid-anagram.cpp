class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size()!=t.size()){
            return false;
        }
        int n=s.size();
        map<char,int>sh;
        map<char,int>th;
        for(int i=0;i<n;i++){
            sh[s[i]]++;
        }
        for(int i=0;i<n;i++){
            th[t[i]]++;
        }
        if(sh==th){
            return true;
        }
        return false;
    }
};
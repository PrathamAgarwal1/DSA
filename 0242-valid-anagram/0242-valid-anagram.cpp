class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map <char,int> hash_s;
        unordered_map <char,int> hash_t;
        if(s.size()!=t.size()) return false;
        for(int i=0;i<s.size();i++){
            hash_s[s[i]]+=1;
            hash_t[t[i]]+=1;
        }
        if (hash_s==hash_t){
            return true;
        }
        return false;
    }
};
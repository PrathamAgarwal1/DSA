class Solution {
public:
    bool isIsomorphic(string s, string t) {
        if(s.size()!=t.size())return false;
        unordered_map<char,char>hash_s;
        unordered_map<char,char>hash_t;
        for(int i=0;i<s.size();i++){
            if(hash_s.count(s[i])){//It’s a common way to check “have we seen this character before?” in map-based solutions.
                if(hash_s[s[i]]!=t[i]){//compares if key mapped and this is equal if not false
                    return false;
                }
            }
            else{
                hash_s[s[i]]=t[i];
            }

        }
        for(int j=0;j<t.size();j++){
            if(hash_t.count(t[j])){//It’s a common way to check “have we seen this character before?” in map-based solutions.
                if(hash_t[t[j]]!=s[j]){//compares if key mapped and this is equal if not false
                    return false;
                }
            }
            else{
                hash_t[t[j]]=s[j];
            }
            
        }
        return true;
    }
};
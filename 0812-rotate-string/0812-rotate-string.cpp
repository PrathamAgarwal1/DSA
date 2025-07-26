class Solution {
public:
    bool rotateString(string s, string goal) {
        if(s.size()!=goal.size())return false;
        string check=s+s;
        if(check.find(goal)<check.size()){
            return true;
        }
        return false;
    }
};
class Solution {
public:
    bool rotateString(string s, string goal) {
        if(s.size()!=goal.size())return false;
        string rotationcheck=s+s;
        if(rotationcheck.find(goal)<=rotationcheck.size()){
            return true;
        }
        return false;
    }
};
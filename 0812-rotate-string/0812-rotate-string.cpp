class Solution {
public:
    bool rotateString(string s, string goal) {
        if(s.size()!=goal.size())return false;
        vector <char> temp(s.size());
        int n=s.size();
        for(int k=0;k<s.size();k++){
            for(int i=0;i<s.size();i++){
                temp[(i+k)%n]=s[i];
                string rotated(temp.begin(), temp.end());
                if(rotated==goal){
                    return true;
                }
            }
        }
        return false;
    }
};
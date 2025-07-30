class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set <int> myset(nums.begin(),nums.end());
        int longestStreak=0;
        for(auto it : myset){
            if(myset.find(it-1)==myset.end()){//myset.end() means not found
                int currentNum=it;
                int currentStreak=1;
                while(myset.find(currentNum+1)!=myset.end()){
                    currentNum+=1;
                    currentStreak+=1;
                }
                longestStreak=max(currentStreak,longestStreak);
            }
        }
        return longestStreak;
    }
};
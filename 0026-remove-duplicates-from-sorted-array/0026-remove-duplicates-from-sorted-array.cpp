class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        set<int>sets;
        int n=nums.size();
        if(nums.empty())return 0;
        for(int i=0;i<n;i++){
            sets.insert(nums[i]);
        }
        int k=sets.size();
        int j=0;
        for(int x:sets){
            nums[j++]=x;
        }
        return k;
    }
};
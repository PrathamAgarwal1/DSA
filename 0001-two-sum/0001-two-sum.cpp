class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int>mpp;
        for(int i=0;i<nums.size();i++){
            int missing_number=target-nums[i];
            if(mpp.find(missing_number)!=mpp.end()){
                return{mpp[missing_number],i};
            }
            mpp[nums[i]]=i;

        }
        return {};
    }
};
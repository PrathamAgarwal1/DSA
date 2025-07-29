class Solution {
public:
    int smallestDivisor(vector<int>& nums, int threshold) {
        int low=1;
        int high=nums[0];
        for(int i=0;i<nums.size();i++){
            if(high<nums[i]){
                high=nums[i];
            }
        }
        int result=high;
        while(low<=high){
            int mid=(low+high)/2;
            long long totalSum=0;
            for(int i=0;i<nums.size();i++){
                totalSum+=(nums[i]+mid-1)/mid;
            }
            if(totalSum<=threshold){
                result=mid;
                high=mid-1;
            }
            else{
                low=mid+1;
            }

        }
        return result;
    }
};
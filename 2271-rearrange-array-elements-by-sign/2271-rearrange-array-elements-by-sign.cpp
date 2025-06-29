class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int>result(nums.size());
        int pos=0;
        int neg=1;
        for(int i=0;i<nums.size();i++){
            
            if(nums[i]<0){
                result[neg]=nums[i];
                neg+=2;
            }
            else{
                result[pos]=nums[i];
                pos+=2;
            }
    
       }
       return result;
    }
};
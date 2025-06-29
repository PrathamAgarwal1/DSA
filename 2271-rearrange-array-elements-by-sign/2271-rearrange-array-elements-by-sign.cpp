class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int>temp1;//positive
        vector<int>temp2;//negative
        int n=nums.size();
        for(int i=0;i<n;i++){
            if(nums[i]>0){
                temp1.push_back(nums[i]);
            }
            else{
                temp2.push_back(nums[i]);
            }
        }
        vector<int>result;
        int j=0,k=0;
        for(int i=0;i<n;i++){
            if(i%2==0){
                result.push_back(temp1[j]);
                j++;
            }
            if(i%2!=0){
                result.push_back(temp2[k]);
                k++;
            }
        }
        return result;
    }
};
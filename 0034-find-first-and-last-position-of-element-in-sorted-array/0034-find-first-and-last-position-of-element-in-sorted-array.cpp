class Solution {
public:
    vector<int> searchRange(vector<int>& arr, int target) {
        int n=arr.size();
        int low=0,high=n-1;
       
        int first=-1,last=-1;
        while(low<=high){//findind last occurence
            int mid=(low+high)/2;
            if(arr[mid]==target){
                last=mid;
                low=mid+1;
            }
            else if(arr[mid]<target){
                low=mid+1;
            }
            else{
                high=mid-1;
            }
            

        }
        low=0,high=n-1;
        while(low<=high){//finding first occurence
            int mid=(low+high)/2;
            if(arr[mid]==target){
                first=mid;
                high=mid-1;
            }
            else if(arr[mid]<target){
                low=mid+1;
            }
            else{
                high=mid-1;
            }
            

        }
        return {first,last};
    }
};
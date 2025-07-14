class Solution {
public:
    int searchInsert(vector<int>& arr, int target) {
        int n=arr.size();
        int low=0,high=n-1;
        int answer=n;
        while(low<=high){
            int mid=(low+high)/2;
            if(arr[mid]>=target){
                answer=mid;
                high=mid-1;//looking for smaller index on the left
                
            }
            else if(arr[mid]<target){

                low=mid+1;
            }
        }
        return answer;
    }
};
class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        int low=0;
        int high=arr.size()-1;
        int missing=0;
        int answer=0;
        while(low<=high){
            int mid=(low+high)/2;
            int missing=arr[mid]-(mid+1);
            if(missing<k){
                low=mid+1;//not enough missing no go right
            }
            else{
                high=mid-1;
            }
        }
        return low+k;
    }
};
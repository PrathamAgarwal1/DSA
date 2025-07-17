class Solution {
public:
    int search(vector<int>& arr, int target) {
        //either the left is sorted or the right is sorted ek mei breakage hoyega as in case of rotated sorted arrays
        int low=0,high=arr.size()-1;
        while(low<=high){
            int mid=(low+high)/2;
            if(arr[mid]==target)return mid;
            if(arr[low]<=arr[mid]){ //ensures left part is sorted
                if(target>=arr[low] && target<=arr[mid]){
                    high=mid-1;
                }
                else{
                    low=mid+1;
                }
            }
            else{//ensures right part is sorted
                if(target<=arr[high] && target>=arr[mid]){
                    low=mid+1;
                }
                else{
                    high=mid-1;
                }
            }
        }
        return -1;

    }
};
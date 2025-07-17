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
/*
Imagine you're searching in a book where some pages got rotated and now the chapters are split oddly.

You open to a middle page.

If the left side is normal and in order, you check if the chapter you're looking for lies in it.

If it doesn't, you skip to the other side.

You always trust the sorted side and use it to decide where the rotation might have hidden your answer.
*/
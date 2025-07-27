class Solution {
public:
    int singleNonDuplicate(vector<int>& arr) {
        int n=arr.size();
        int low=0,high=n-1;
        while(low<=high){
            int mid=(low+high)/2;
            if ((mid == 0 || arr[mid] != arr[mid - 1]) && (mid == n- 1 || arr[mid] != arr[mid + 1])) {
                return arr[mid];  // Found the single element
            }
            if(mid%2==1)mid--;//only works when mid is at odd we want it to have it on the pair so as even and odd gets to be a pair
            if(arr[mid]==arr[mid+1]){
                low=mid+2;//we  move to left and continue from after the element so our logic was to make even and odd pairs agar breakage hai like pair is odd and even ham peeche chale jaate hai
            
            }
            else{
                high=mid;
            }
        }
        return -1;
    }

};
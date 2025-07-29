class Solution {
public:
    bool canMake(vector<int>& bloomDay,int mid,int m,int k){
        int count=0;
        int bouquets=0;
        for(int i=0;i<bloomDay.size();i++){
            if(bloomDay[i]<=mid){
                count++;
                if(count==k){
                    bouquets++;
                    count=0;//reset
                }
            }
            else{
                count=0;
            }
        }
        if(bouquets>=m){
            return true;
        }
        return false;
    }
    int minDays(vector<int>& bloomDay, int m, int k) {
        long long totalflowers=(long long)m*k;
        if(bloomDay.size()<totalflowers) return -1;
        int low=1;
        int high = bloomDay[0];
        for (int i = 1; i < bloomDay.size(); i++) {
            if (bloomDay[i] > high) {
                high = bloomDay[i];
            }
        }
        int answer=-1;
        while(low<=high){
            int mid=(low+high)/2;
            if(canMake(bloomDay,mid,m,k)){
                answer=mid;
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        return answer;
    }
};
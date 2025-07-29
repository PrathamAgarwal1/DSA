class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int low=1;
        int high = piles[0];
        for (int i = 1; i < piles.size(); i++) {
            if (piles[i] > high) {
                high = piles[i];
            }
        }
        int answer=high;
        while(low<=high){
            int mid=(low+high)/2;
            long long totalhours=0;
            for(int i=0;i<piles.size();i++){
                totalhours+=(piles[i]+mid-1)/mid;
            }
            if(totalhours<=h){
                answer=mid;
                high=mid-1;//searching for lower mid coz we have to find minimum speed
            }
            else{
                low=mid+1;
            }
        }
        return answer;

    }
};
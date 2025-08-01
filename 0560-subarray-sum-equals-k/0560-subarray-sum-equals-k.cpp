class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int, int> prefixSumFreq;
        prefixSumFreq[0] = 1;//so that it doesnt remain empty for the edge case empty array
        int sum = 0, count = 0;

        for (int num : nums) {
            sum += num;
            if (prefixSumFreq.find(sum - k) != prefixSumFreq.end()) {
                count += prefixSumFreq[sum - k];
            }//this helps store sum in hash map so that baad mei fir se traverse naa krna pade saving time
            prefixSumFreq[sum]++;
        }

        return count;
    }
};
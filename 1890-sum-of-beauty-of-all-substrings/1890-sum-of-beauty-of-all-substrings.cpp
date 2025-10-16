class Solution {
public:
    int beautySum(string s) {
        int sum=0;
        int n=s.length();
        unordered_map <char,int> freq;
        for (int i = 0; i < n; i++) {
            freq.clear();

            for (int j = i; j < s.length(); j++) {
                // Increase frequency of current character
                freq[s[j]]++;

                int maxi = INT_MIN;
                int mini = INT_MAX;

                // Find max and min frequency
                for (auto it : freq) {
                    mini = min(mini, it.second);
                    maxi = max(maxi, it.second);
                }

                // Add difference to sum
                sum += (maxi - mini);
            }
        }

        return sum;
    }
};

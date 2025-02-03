//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
// User function template for C++
class Solution {
  public:
    // Function returns the second
    // largest elements
    int getSecondLargest(vector<int> &arr) {
        int n=arr.size();
        if(n<2){
            return -1;
        }
        int largest=INT_MIN;
        int slarge=INT_MIN;
        for(int i=0;i<n;i++){
            if(arr[i]>largest){
                slarge=largest;
                largest=arr[i];
            }
            else if(arr[i]>slarge && arr[i]!=largest){
                slarge=arr[i];
            }
        }
        if(slarge==INT_MIN)return -1;
        return slarge;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        Solution ob;
        int ans = ob.getSecondLargest(arr);
        cout << ans << endl;
        cout << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends
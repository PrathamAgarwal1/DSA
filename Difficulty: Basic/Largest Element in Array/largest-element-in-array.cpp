//{ Driver Code Starts
#include <bits/stdc++.h>
#include <iostream>
#include <sstream>
#include <string>
#include <vector>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    int largest(const vector<int> &arr) {
        // Initialize max to the first element
        int max = arr[0];
        int sz = arr.size();
        for (int i = 1; i < sz; i++) { // Start from the second element
            if (max < arr[i]) {
                max = arr[i];
            }
        }
        return max;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore(); // To handle the newline character after t input

    while (t--) {
        string input;
        getline(cin, input);
        stringstream s2(input);
        
        int num;
        vector<int> arr;
        while (s2 >> num) {
            arr.push_back(num);
        }

        Solution ob;
        cout << ob.largest(arr) << endl;
        cout << "~" << endl;
    }

    return 0;
}

// } Driver Code Ends

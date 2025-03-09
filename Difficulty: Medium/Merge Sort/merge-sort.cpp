//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    void mergeSort(vector<int>& arr, int low, int high) {
        int middle=low+(high-low)/2;
        if(low>=high)return;
        mergeSort(arr,low,middle);
        mergeSort(arr,middle+1,high);
        Merge(arr,low,middle,high);
    }
    void Merge(vector<int>&arr, int low, int middle,int high){
        int i=low;
        int j=middle+1;
        int k=0;
        vector<int>result;
        while(i<=middle && j<=high){
            if(arr[i]<=arr[j]){
                result.push_back(arr[i]);
                k++;
                i++;
            }
            else{
                result.push_back(arr[j]);
                k++;
                j++;
            }
        }
        while(i<=middle){
            result.push_back(arr[i]);
            k++;
            i++;
        }
        while(j<=high){
            result.push_back(arr[j]);
            k++;
            j++;
        }
        for (int k = 0; k < result.size(); k++) {
            arr[low + k] = result[k];
}
    }
};


//{ Driver Code Starts.

int main() {
    string ts;
    getline(cin, ts);
    int t = stoi(ts);
    while (t--) {
        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        Solution obj;
        obj.mergeSort(arr, 0, arr.size() - 1);
        for (int i = 0; i < arr.size(); i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
        cout << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends
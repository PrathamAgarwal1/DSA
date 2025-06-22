int getSecondLargest(int *arr, int n) {
    if(n<2){
        return -1;
    }
    int largest=INT_MIN;
    int slargest=INT_MIN;
    for(int i=0;i<n;i++){
        if(arr[i]>largest){
            slargest=largest;
            largest=arr[i];
        }
        else if(arr[i]>slargest && arr[i]!=largest){
            slargest=arr[i];
        }
    }
    if(slargest==INT_MIN)return -1;
    return slargest;
}

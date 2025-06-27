class Solution {
  public:
    // a,b : the arrays
    // Function to return a list containing the union of the two arrays.
    vector<int> findUnion(vector<int> &a, vector<int> &b) {
        vector<int>Union;
        int i=0,j=0;
        while(i < a.size() && j < b.size()){
            if(a[i]<=b[j]){
                if(Union.size()==0||Union.back()!=a[i]){
                    Union.push_back(a[i]);
                
                }
                i++;
            }
            else if(b[j]<a[i]){
                if(Union.size()==0||Union.back()!=b[j]){
                    Union.push_back(b[j]);
                
                }
                j++;
            }
             
        }
        while(i<a.size()){
            if(Union.back()!=a[i]){
                Union.push_back(a[i]);
            }
            i++;
            
        }
        while(j<b.size()){
            if(Union.back()!=b[j]){
                Union.push_back(b[j]);
            }
            j++;
            
        }
         
        return Union;
        // return vector with correct order of elements
    }
};
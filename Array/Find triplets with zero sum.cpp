class Solution{
  public:
    //Function to find triplets with zero sum.
    bool findTriplets(int arr[], int n)
    { 
        vector<int>ans;
        sort(arr,arr+n);
        for(int i=0;i<n;i++){
            int s=i+1;
            int e=n-1;
            while(s<e){
                
                if(arr[i]+arr[s]+arr[e]>0){
                    e--;
                }
                else if(arr[i]+arr[s]+arr[e]<0){
                    s++;
                }
                else{
                    return true;
                }
            }
        }
        return false;
    }
};
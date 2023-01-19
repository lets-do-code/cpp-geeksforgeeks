//{ Driver Code Starts
#include <bits/stdc++.h>


using namespace std;




// } Driver Code Ends

class Solution{
  public:
    int Countpair(int arr[], int n, int sum){
        
        // Complete the function
     int e=n-1,s=0;
    int ans=0, newSum=0;
    
    while (s<e){
        newSum=arr[s]+arr[e];
        
        if(newSum==sum){
            ans++;
            s++;
            e--;
        }
        
        else if(newSum<sum){
            s++;
        }
        else{
            e--;
        }
    }
        if(ans==0){
            return -1;
        }
        else{
        return ans;
        }
        
    }
};

//{ Driver Code Starts.
int main()
 {
    int t;
    cin>>t;
    while(t--)
    {
        
        int n;
        cin>>n;
        int arr[n+1];
        
        for(int i=0;i<n;i++)
        cin>>arr[i];

        int sum;
        cin>>sum;
        Solution obj;
        cout << obj.Countpair(arr, n, sum) << endl;
        
    }
	return 0;
}

// } Driver Code Ends
//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
    pair<long,long> indexes(vector<long long> arr, long long x)
    {
        pair<long,long> v;
    long long start = 0,ans=-1 ;
    long long end = arr.size()-1;
    long mid  = start + (end-start)/2;
    
    
    
    while(start<=end){
        if(x == arr[mid]){
            ans = mid;
            end = mid-1;
        }
        else if(x<arr[mid]){
            end = mid - 1;
        }
        else{
            start = mid + 1;
        }
        mid = start + (end-start)/2;
    }
    v.first=ans;
    
    start = 0 ;
    end = arr.size()-1;
    mid  = start + (end-start)/2;
    
    while(start<=end){
        if(x == arr[mid]){
            ans = mid;
            start = mid+1;
        }
        else if(x<arr[mid]){
            end = mid - 1;
        }
        else{
            start = mid + 1;
        }
        mid = start + (end-start)/2;
    }
    v.second=ans;
    return v;
    }
    
};

//{ Driver Code Starts.

int main()
 {
    long long t;
    cin>>t;
    while(t--)
    {
        long long n, k;
        vector<long long>v;
        cin>>n;
        for(long long i=0;i<n;i++)
        {
            cin>>k;
            v.push_back(k);
        }
        long long x;
        cin>>x;
        Solution obj;
        pair<long,long> pair = obj.indexes(v, x);
        
        if(pair.first==pair.second and pair.first==-1)
        cout<< -1 <<endl;
        else
        cout<<pair.first<<" "<<pair.second<<endl;

    }
	return 0;
}

// } Driver Code Ends
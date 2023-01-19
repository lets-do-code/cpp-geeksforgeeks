//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends


vector<int> find(int arr[], int n , int x )
{
   
    /*vector<int>ar;
    int s=0;
    int e=n-1;
    int mid=s+(e-s)/2;
    int ans=-1;
    while(s<=e){
        
        if(arr[mid]==x){
            ans=mid;
            e=mid-1;
           
        }
        if(arr[mid]<x){
            s=mid+1;
        }
        else{
            e=mid-1;
        }
        mid=s+(e-s)/2;
    
    }
    ar.push_back(ans);
    s=0;
    e=n-1;
    
    mid=s+(e-s)/2;
    while(s<=e){
        
        if(arr[mid]==x){
            ans=mid;
            s=mid+1;
           
        }
        if(arr[mid]<x){
            s=mid+1;
        }
        else{
            e=mid-1;
        }
        mid=s+(e-s)/2;
       
    }
    ar.push_back(ans);
    return ar;
  
    
}*/

// code here
    vector<int> v;
    int start = 0 ;
    int end = n-1;
    int mid  = start + (end-start)/2;
    
    int res  = -1;
    
    while(start<=end){
        if(x == arr[mid]){
            res = mid;
            end = mid-1;
        }
        else
        if(x<arr[mid])
            end = mid - 1;
        else
        if(x>arr[mid])
            start = mid + 1;
        
        mid = start + (end-start)/2;
    }
    v.push_back(res);
    
    start = 0 ;
    end = n-1;
    mid  = start + (end-start)/2;
    
    while(start<=end){
        if(x == arr[mid]){
            res = mid;
            start = mid+1;
        }
        else
        if(x<arr[mid])
            end = mid - 1;
        else
        if(x>arr[mid])
            start = mid + 1;
        
        mid = start + (end-start)/2;
    }
    v.push_back(res);
    return v;
}

//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,x;
        cin>>n>>x;
        int arr[n],i;
        for(i=0;i<n;i++)
        cin>>arr[i];
        vector<int> ans;
        ans=find(arr,n,x);
        cout<<ans[0]<<" "<<ans[1]<<endl;
    }
    return 0;
}



// } Driver Code Ends
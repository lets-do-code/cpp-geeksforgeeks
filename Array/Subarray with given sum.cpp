//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
    //Function to find a continuous sub-array which adds up to a given number.
    vector<int> subarraySum(vector<int>arr, int n, long long s)
    {
        long long start = 0, currsum = arr[0],i=0;
        vector<int>ans;
        while(i<n)

        {

            if(currsum==s)

            {

                ans.push_back(start+1);

                ans.push_back(i+1);

                return ans;

            }

            else if(currsum<s || start==i)

            {

                i++;

                currsum += arr[i];

            }

            else if(currsum>s){

                currsum -= arr[start];

                start++;

            }

        }

        ans.push_back(-1);

        return ans;
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
        long long s;
        cin>>n>>s;
        vector<int>arr(n);
        // int arr[n];
        const int mx = 1e9;
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        Solution ob;
        vector<int>res;
        res = ob.subarraySum(arr, n, s);
        
        for(int i = 0;i<res.size();i++)
            cout<<res[i]<<" ";
        cout<<endl;
        
    }
	return 0;
}
// } Driver Code Ends
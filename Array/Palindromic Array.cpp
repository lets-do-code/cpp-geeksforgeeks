//{ Driver Code Starts
#include<iostream>
#include<string.h>
using namespace std;


// } Driver Code Ends
/*Complete the function below*/

class Solution {
    public:
    int PalinArray(int a[], int n)
    {   
    	for(int i=0;i<n;i++){
    	    int revs=0;
    	    int temp=a[i];
    	    
    	    while(temp>0){
                int digit=temp%10;
                temp=temp/10;
                revs=(revs*10)+digit;
                
            }
            if(a[i]!=revs){
                return 0;
            }
    	}
    	return 1;
    	
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
		int a[n];
		for(int i = 0; i < n; i++)
			cin>>a[i];
		Solution obj;
		cout<<obj.PalinArray(a,n)<<endl;
	}
}
// } Driver Code Ends
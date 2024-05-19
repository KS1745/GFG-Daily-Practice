//{ Driver Code Starts
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution{
    public:
    int findClosest( int n, int k,int arr[]) 
    { 
        int l=0,h=n-1,ans=0,mini=INT_MAX;
        while(l<=h){
            int mid=l+(h-l)/2;
            if(abs(arr[mid]-k)<mini){
                mini=abs(arr[mid]-k);
                ans=arr[mid];
            }
            else if(mini==abs(arr[mid]-k)){
                ans=max(ans,arr[mid]);
            }
            if(arr[mid]>k){
                h=mid-1;
            }
            else{
                l=mid+1;
            }
        }
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
        int n,k;
        cin>>n>>k;
        int arr[n];
        for (int i=0; i<n; i++)
        {
            cin>>arr[i];
        }
        Solution ob;
        cout<<ob.findClosest(n,k,arr)<<endl;
    }
}

// } Driver Code Ends
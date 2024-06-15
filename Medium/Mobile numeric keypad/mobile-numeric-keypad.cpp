//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    long long getcount(int i,int n,map<int,vector<int>> &m,vector<vector<long long int>> &dp)
    {
        if(n==1) return 1;
        if(dp[n][i]!=-1) return dp[n][i];
        long long k=0;
        for(auto j:m[i])
        {
            k=k+getcount(j,n-1,m,dp);
        }
        return dp[n][i]=k;
    }
    
    
    long long getCount(int n) {
        map<int,vector<int>> m;
        m[0]={0,8};
        m[1] = {2,4,1};
        m[2] = {1,3,5,2};
        m[3] = {2,6,3};
        m[4] = {1,5,7,4};
        m[5] = {2,4,6,8,5};
        m[6] = {3,5,9,6};
        m[7] = {4,8,7};
        m[8] = {5,7,9,0,8};
        m[9] = {6,8,9};
        
        long long s=0;
        vector<vector<long long int>> dp(n+1,vector<long long int>(10,-1));
        
        for(int i=0;i<10;i++)
        {
            s=s+getcount(i,n,m,dp);
        }
        return s;
    }
};

//{ Driver Code Starts.
int main() {

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        Solution ob;
        cout << ob.getCount(n) << "\n";
    }
    return 0;
}

// } Driver Code Ends
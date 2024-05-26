//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {

  public:
    int findMinCost(string x, string y, int costX, int costY) {
        // Your code goes here
         int n=x.size();
        int m=y.size();
        vector<vector<int>>dp(n+1,vector<int>(m+1,0));
        for(int i=0;i<=n;i++)
        {
            for(int j=0;j<=m;j++)
            {
                if(i==0)
                {
                    dp[i][j]=j*costY;
                }
                else if(j==0)
                {
                    dp[i][j]=i*costX;
                }
                else
                {
                    if(x[i-1]==y[j-1])
                    {
                        dp[i][j]=dp[i-1][j-1];
                    }
                    else
                    {
                        dp[i][j]=min(costX+dp[i-1][j],costY+dp[i][j-1]);
                    }
                }
            }
        }
        return dp[n][m];
    }
};


//{ Driver Code Starts.
int main() {

    int t;
    cin >> t;
    while (t--) {
        string x, y;
        cin >> x >> y;

        int costX, costY;
        cin >> costX >> costY;

        Solution ob;
        cout << ob.findMinCost(x, y, costX, costY);
        cout << "\n";
    }
    return 0;
}

// } Driver Code Ends
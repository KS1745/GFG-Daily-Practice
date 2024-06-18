//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    int square(int n) {
        return n * n;
    }
    
    int rectanglesInCircle(int r) {
        // code here
        int ans = 0;
        for (int x = 1; x < 2 * r; x++) {
            for (int y = 1; y < 2 * r; y++) {
                int xSq = square(x);
                int ySq = square(y);
                int rSq = 4 * square(r);
                
                if (xSq + ySq <= rSq) {
                    ans++;
                }
            }
        }
        
        return ans;
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
        int ans = ob.rectanglesInCircle(n);
        cout << ans << "\n";
    }
}
// } Driver Code Ends
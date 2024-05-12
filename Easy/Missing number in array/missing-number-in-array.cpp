//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;




// } Driver Code Ends
// User function template for C++

class Solution{
  public:
    int missingNumber(vector<int>& array, int n) {
        // Your code goes here
        
        int XOR1 = 0;
        int XOR2 = 0;
        for(int i=0; i<n-1; i++){
            XOR2 = XOR2 ^ array[i];
            XOR1 = XOR1 ^ (i+1);
        }
        XOR1 = XOR1 ^ n;
        return XOR1 ^ XOR2;
        
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        vector<int> array(n - 1);
        for (int i = 0; i < n - 1; ++i) cin >> array[i];
        Solution obj;
        cout << obj.missingNumber(array, n) << "\n";
    }
    return 0;
}
// } Driver Code Ends
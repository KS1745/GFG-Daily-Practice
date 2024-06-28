//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:

    string pattern(vector<vector<int>> &arr) {
         int n = arr.size();
        bool isDone = true;
        
        // Check row symmetry
        for(int i = 0; i < n; i++){
            for(int j = 0; j < n/2; j++){
                if(arr[i][j] != arr[i][n-j-1]){
                    isDone = false;
                    break;
                }
            }
            if(isDone){
                return to_string(i) + " R";
            }
            isDone = true;
        }
        
        // Check column symmetry
        for(int i = 0; i < n; i++){
            for(int j = 0; j < n/2; j++){
                if(arr[j][i] != arr[n-j-1][i]){
                    isDone = false;
                    break;
                }
            }
            if(isDone){
                return to_string(i) + " C";
            }
            isDone = true;
        }
        
        return "-1";
    }
};


//{ Driver Code Starts.

int main() {

    int t, n, i, j, flag, k;
    cin >> t;

    while (t--) {
        cin >> n;
        vector<vector<int>> a(n, vector<int>(n));

        for (i = 0; i < n; i++) {
            for (j = 0; j < n; j++)
                cin >> a[i][j];
        }
        Solution ob;
        cout << ob.pattern(a) << endl;
    }
    return 0;
}
// } Driver Code Ends
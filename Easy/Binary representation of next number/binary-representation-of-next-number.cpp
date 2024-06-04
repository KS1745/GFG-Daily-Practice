//{ Driver Code Starts

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    string binaryNextNumber(string s) {
        string op="";
        int carry=1;
        int k=0;
        for(;k<s.length();k++)
        if(s[k]=='1')break;
        
        for(int i=s.length()-1;i>=k;i--)
        {
            if(s[i]=='1'){
                if(carry==1){
                op="0"+op;}
                else{
                    carry=0;
                    op="1"+op;
                }
            }else{
                if(carry==1){
                    carry=0;
                    op="1"+op;
                }else{
                    carry=0;
                     op="0"+op;
                }
            }
            
        }
        if(carry==1)
        op="1"+op;
        return op;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        Solution ob;
        cout << ob.binaryNextNumber(s);
        cout << "\n";
    }

    return 0;
}
// } Driver Code Ends
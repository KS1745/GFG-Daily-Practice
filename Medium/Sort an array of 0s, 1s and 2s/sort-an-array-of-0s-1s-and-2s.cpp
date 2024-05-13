//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;



// } Driver Code Ends
class Solution
{
    public:
    void sort012(int a[], int n)
    {
        //Better Solution
        int countZero = 0;
        int countOne = 0;
        int countTwo = 0;
        
        for(int i=0; i<n; i++){
            if(a[i] == 0){
                countZero++;
            }
            else if(a[i] == 1){
                countOne++;
            }
            else{
                countTwo++;
            }
        }
        
        int j = 0;
        while(countZero--){
            a[j] = 0;
            j++;
        }
        
        while(countOne--){
            a[j] = 1;
            j++;
        }
        while(countTwo--){
            a[j] = 2;
            j++;
        }
        
    }
    
};

//{ Driver Code Starts.
int main() {

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin >> a[i];
        }

        Solution ob;
        ob.sort012(a, n);

        for(int i=0;i<n;i++){
            cout << a[i]  << " ";
        }

        cout << endl;
        
        
    }
    return 0;
}


// } Driver Code Ends
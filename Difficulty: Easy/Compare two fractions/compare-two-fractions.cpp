//{ Driver Code Starts

#include <iostream>
#include <regex>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    string compareFrac(string str) {

        string temp1="";
       string temp2="";
       string temp3="";
       string temp4="";
       int idx = 0;
       while(str[idx] != '/' and str[idx] != ' ')
       {
           temp1 += str[idx];
           idx++;
       }
       idx++;
       while(str[idx] != ',' and str[idx] != ' ')
       {
           temp2 += str[idx];
           idx++;
       }
       idx++;
       idx++;
       while(str[idx] != '/' and str[idx] != ' ')
       {
           temp3 += str[idx];
           idx++;
       }
       idx++;
       while(idx < str.size() and str[idx] != ' ')
       {
           temp4 += str[idx];
           idx++;
       }
       int a = std::atoi(temp1.c_str());
       int b = std::atoi(temp2.c_str());
       int c = std::atoi(temp3.c_str());
       int d = std::atoi(temp4.c_str());
       //cout << a << " "<< b << " " << c << " " << d << endl;
       if( (float)a/b == (float)c/d )
       {
           return "equal";
       }
       else if( (float)a/b  > (float)c/d)
       {
           return to_string(a) + "/" + to_string(b);
       }
       else
       {
            return to_string(c) + "/" + to_string(d);
       }
    }
};


//{ Driver Code Starts.

int main() {
    Solution ob;
    int t;
    cin >> t;
    cin.ignore();
    for (int i = 0; i < t; i++) {

        string str;
        getline(cin, str);

        cout << ob.compareFrac(str) << endl;
    }
    return 0;
}

// } Driver Code Ends
//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

// User function template for C++
class Solution {
  public:

    vector<int> bracketNumbers(string str) {
        int cnt=0;
        vector<int>sol;
        stack<int>st;
        for(int i=0;i<str.size();i++){
            if(str[i]=='('){
            cnt++;
            sol.push_back(cnt);
            st.push(cnt);
        }
        else if(str[i]==')'){
            sol.push_back(st.top());
            st.pop();
        }
        }
        return sol;
        
    }
};


//{ Driver Code Starts.

int main() {

    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    string tc;
    getline(cin, tc);
    t = stoi(tc);
    while (t--) {
        string s;
        getline(cin, s);

        Solution ob;

        vector<int> ans = ob.bracketNumbers(s);

        for (auto i : ans)
            cout << i << " ";

        cout << "\n~\n";
    }

    return 0;
}
// } Driver Code Ends
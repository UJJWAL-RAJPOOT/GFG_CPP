//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    vector<int> calculateSpan(vector<int>& arr) {
        int n=arr.size();
        stack<int>st;
        vector<int>sol(n);
        for(int i=n-1;i>=0;i--){
            while(!st.empty() && arr[i]>arr[st.top()]){
                sol[st.top()]=st.top()-i;
                st.pop();
            }
            st.push(i);
        }
        while(!st.empty()){
            sol[st.top()]=st.top()+1;
            st.pop();
        }
        return sol;
    }
};


//{ Driver Code Starts.

int main() {
    string ts;
    getline(cin, ts);
    int t = stoi(ts);
    while (t--) {
        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        Solution obj;
        vector<int> ans = obj.calculateSpan(arr);
        for (int i = 0; i < ans.size(); i++) {
            cout << ans[i] << " ";
        }
        cout << endl;
        cout << "~" << endl;
    }
    return 0;
}
// } Driver Code Ends
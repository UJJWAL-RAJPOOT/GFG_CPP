//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

// User function Template for C++

// Function to push all the elements into the stack.
stack<int> push(vector<int>& arr) {
      stack<int>st;
      int n=arr.size();
    for(int i=0;i<n;i++){
        if(i==0)
        st.push(arr[i]);
        else
        st.push(min(arr[i],st.top()));
    }
    return st;
}

// Function to print minimum value in stack each time while popping.
void getMinAtPop(stack<int> s) {
     while(!s.empty()){
        cout<<s.top()<<" ";
        s.pop();
    }
}


//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        string line;
        getline(cin, line);
        stringstream ss(line);
        vector<int> arr;
        int num;
        while (ss >> num) {
            arr.push_back(num);
        }
        stack<int> s = push(arr);
        getMinAtPop(s);

        cout << endl;
    }
    return 0;
}

// } Driver Code Ends
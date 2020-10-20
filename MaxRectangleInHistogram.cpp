
#include <bits/stdc++.h>
using namespace std;

vector<int> suffix_array(long long arr[], int n){
    stack<long long> s;
    vector<int > prefix;
    for(int i = n - 1; i >= 0; i--){
        if(s.empty()) {
            prefix.push_back(n);
            s.push(i);
        }
        else if(arr[i] > arr[s.top()]){
            prefix.push_back(i + 1);
            s.push(i);
        }
        else{
            while(arr[s.top()] >= arr[i]){
                s.pop();
                if(s.empty()) break;
            }
            if(s.empty()) {
                prefix.push_back(n);
                s.push(i);
            }
            else{
                prefix.push_back(s.top());
                s.push(i);
            }
        }
    }
    reverse(prefix.begin(), prefix.end());
    return prefix;
    
}

vector<int> prefix_array(long long arr[], int n){
    stack<long long> s;
    vector<int > prefix;
    for(int i = 0; i < n; i++){
        if(s.empty()) {
            prefix.push_back(-1);
            s.push(i);
        }
        else if(arr[i] > arr[s.top()]){
            prefix.push_back(i - 1);
            s.push(i);
        }
        else{
            while(arr[s.top()] >= arr[i]){
                s.pop();
                if(s.empty()) break;
            }
            if(s.empty()) {
                prefix.push_back(-1);
                s.push(i);
            }
            else{
                prefix.push_back(s.top());
                s.push(i);
            }
        }
    }
    return prefix;
    
}


long getMaxArea(long long arr[], int n){
    
    // Your code here
    vector<int > prefix = prefix_array(arr, n);
    vector<int> suffix = suffix_array(arr, n);
    // for(int i = 0; i < prefix.size(); i++) cout << prefix[i] << " ";
    // for(int i = 0; i < suffix.size(); i++) cout << suffix[i] << " ";
    // cout << endl;
    long ans = 0, m = 0;
    for(int i = 0; i < n; i++){
        ans = (suffix[i] - prefix[i] - 1) * arr[i];
        m = max(m, ans);
    }
    return m;

    // return 000;
}





int main()
 {
    long long t;

    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        
        long long arr[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        
        cout<<getMaxArea(arr, n)<<endl;
    
    }
	return 0;
}
#include<bits/stdc++.h>
using namespace std;
// #include<map>

int main(){
  vector<string> arr;
  map<string, int> mp;
  int notkeys = 0, totalkeys = 0;
  while(1){
    string s; 
    cin >> s;
    if(s[0] == 'q') break;
    if(s[0] == '-') notkeys++;
    totalkeys++;
    mp[s]++;
  }
  cout << "BLANK KEYS:" << notkeys << endl;
  cout << "TOTAL KEYS:" << totalkeys<< endl;
  cout << "NUMBER OF LOCKS:" << mp.size() << endl;
}
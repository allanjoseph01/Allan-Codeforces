#include<bits/stdc++.h>
using namespace std;
#ifdef LOCAL
#include "algo/debug.h"
#else
#define debug(...) 42
#endif
long long arr[100000];
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	int t;
	cin >> t;
	for(int _=0;_<t;_++){
		int n,k;
		cin >> n >> k;
		string s;
		cin >> s;
		map<char,int> chc;
		for(int i=0;i<n;i++){
			if(chc.find(s[i])==chc.end()){
				chc.insert(make_pair(s[i],1));
			}else{
				chc[s[i]]++;
			}
		}
		int countodd=0;
		for(auto i=chc.begin();i!=chc.end();i++){
			if(i->second%2==1){
				countodd++;
			}
		}
		if((countodd-1)<=k){
			cout << "YES" << endl;
		}else{
			cout << "NO" << endl;
		}
	}
}
#include<bits/stdc++.h>
using namespace std;
#ifdef LOCAL
#include "algo/debug.h"
#else
#define debug(...) 42
#endif
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	int t;
	cin >> t;
	for(int _=0;_<t;_++){
		int n,m,k;
		cin >> n >> m >> k;
		vector<int>ans;
		int i=n;
		while(i>=k){
			ans.push_back(i);
			i--;
		}
		while(i>m){
			ans.push_back(i);
			i--;
		}
		int j=1;
		while(j<=m){
			ans.push_back(j);
			j++;
		}
		for(int i=0;i<n;i++){
			cout << ans[i] << " ";
		}
		cout << endl;
	}
}
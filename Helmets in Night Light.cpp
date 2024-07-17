#include<bits/stdc++.h>
using namespace std;
#ifdef LOCAL
#include "algo/debug.h"
#else
#define debug(...) 42
#endif
int an[100000];
int cost[100000];
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	int t;
	cin >> t;
	for(int _=0;_<t;_++){
		int n,p;
		cin >> n >> p;
		for(int i=0;i<n;i++){
			cin >> an[i];
		}
		for(int i=0;i<n;i++){
			cin >> cost[i];
		}
		vector<pair<int,int>> ac;
		for(int i=0;i<n;i++){
			ac.push_back(make_pair(cost[i],an[i]));
		}
		sort(ac.begin(),ac.end());
		long long ans=0;
		int i=0;
		int j=n-1;
		while((j-i)>=0){
			ans+=p;
			int val=ac[i].second;
			int c=ac[i].first;
			while(val>0 && (j-i)>0){
				ans+=c;
				j--;
				val--;
			}
			i++;
		}
		cout << ans << endl;
	}
}
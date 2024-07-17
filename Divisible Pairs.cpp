#include<bits/stdc++.h>
using namespace std;
#ifdef LOCAL
#include "algo/debug.h"
#else
#define debug(...) 42
#endif
long long arr[200000];
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	int t;
	cin >> t;
	for(int _=0;_<t;_++){
		long long n,x,y;
		cin >> n >> x >> y;
		for(int i=0;i<n;i++){
			cin >> arr[i];
		}
		long long mx[n],my[n];
		for(int i=0;i<n;i++){
			mx[i]=arr[i]%x;
			my[i]=arr[i]%y;
		}
		long long count=0;
		map<pair<long long,long long>,long long> ansv;
		for(int j=0;j<n;j++){
			long long dig=(x-mx[j])%x;
			count+=(ansv[make_pair(dig,my[j])]);
			ansv[make_pair(mx[j],my[j])]++;
		}
		cout << count << endl;
	}
}
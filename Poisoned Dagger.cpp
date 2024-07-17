#include<bits/stdc++.h>
using namespace std;
#ifdef LOCAL
#include "algo/debug.h"
#else
#define debug(...) 42
#endif
int n;
long long h;
vector<long long> arr(100);
bool check(long long be){
	long long damage=0;
	for(int i=0;i<n-1;i++){
		long long dam=min(arr[i]+be-1,arr[i+1]-1);
		damage+=(dam-arr[i]+1);
		if(damage>=h){
			return true;
		}
	}
	damage+=be;
	return damage>=h;
}
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	int t;
	cin >> t;
	for(int _=0;_<t;_++){
		cin >> n >> h;
		for(int i=0;i<n;i++){
			cin >> arr[i];
		}
		long long high=1e18;
		long long low=0;
		long long ans=1;
		long long mid;
		while(low<=high){
			mid=low+((high-low)/2);
			if(check(mid)){
				high=mid-1;
				ans=mid;
			}else{
				low=mid+1;
			}
		}
		cout << ans << endl;
	}
}
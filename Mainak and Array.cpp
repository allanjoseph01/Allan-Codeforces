#include<bits/stdc++.h>
using namespace std;
#ifdef LOCAL
#include "algo/debug.h"
#else
#define debug(...) 42
#endif
int arr[2000];
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	int t;
	cin >> t;
	for(int _=0;_<t;_++){
		int n;
		cin>>n;
		for(int i=0;i<n;i++){
			cin >> arr[i];
		}
		int ans=0;
		for(int i=1;i<n-1;i++){
			ans=max(ans,arr[i]-arr[0]);
			ans=max(ans,arr[n-1]-arr[i]);
			ans=max(ans,(max(arr[i-1]-arr[i],arr[i]-arr[i+1])));
		}
		if(n==1){
			cout << "0" << endl;
		}else{
			ans=max(ans,arr[n-1]-arr[0]);
			ans=max(ans,arr[0]-arr[1]);
			cout << ans << endl;
		}
	}
}
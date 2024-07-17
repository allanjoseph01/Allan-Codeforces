#include<bits/stdc++.h>
using namespace std;
#ifdef LOCAL
#include "algo/debug.h"
#else
#define debug(...) 42
#endif
int arr[100000];
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	int t;
	cin >> t;
	for(int _=0;_<t;_++){
		int n,k;
		cin >> n >> k;
		for(int i=0;i<n;i++){
			cin >> arr[i];
		}
		int ans=(k-(arr[0]%k));
		int prepr[n];
		prepr[0]=arr[0];
		for(int i=1;i<n;i++){
			if(arr[i]%k==0){
				ans=0;
			}
			ans=min(ans,(k-(arr[i]%k)));
			prepr[i]=prepr[i-1]*arr[i];
		}
		for(int i=1;i<n;i++){
			if(prepr[i]%k==0){
				ans=0;
			}
			ans=min(ans,(k-(prepr[i]%k)));
		}
		cout << ans << endl;
	}
}
#include<bits/stdc++.h>
using namespace std;
#ifdef LOCAL
#include "algo/debug.h"
#else
#define debug(...) 42
#endif
long long arr[1000000];
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	int t;
	cin >> t;
	for(int _=0;_<t;_++){
		int n,k;
		cin >> n >> k;
		for(int i=0;i<n*k;i++){
			cin >> arr[i];
		}
		long long sum=0;
		int sep;
		if(n%2==0){
			sep=(n/2)+1;	
		}else{
			sep=(n+1)/2;
		}
		long long j=(n*k)-sep;
		while(k--){
			sum+=arr[j];
			j-=sep;
		}
		cout << sum << endl;
	}
}
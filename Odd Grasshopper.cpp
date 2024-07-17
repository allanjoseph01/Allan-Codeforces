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
		long long x,n;
		cin >> x >> n;
		if(x%2==0){
			if(n%4==0){
				cout << x << endl;
			}else if((n+1)%4==0){
				cout << x+1+n << endl;
			}else if(n%2==0){
				cout << x+1 << endl;
			}else if((n-1)%4==0){
				cout << x-n << endl;
			}
		}else{
			if(n%4==0){
				cout << x << endl;
			}else if((n+1)%4==0){
				cout << x-1-n << endl;
			}else if(n%2==0){
				cout << x-1 << endl;
			}else if((n-1)%4==0){
				cout << x+n << endl;			
			}
		}
	}
}
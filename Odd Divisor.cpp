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
	vector<long long> prime;
	long long mul2=2;
	while(mul2<=1e15){
		prime.push_back(mul2);
		mul2*=2;
	}
	int t;
	cin >> t;
	for(int _=0;_<t;_++){
		long long n;
		cin >> n;
		bool find=false;
		int siz=prime.size();
		for(int i=0;i<siz;i++){
			if(n==prime[i]){
				find=true;
				cout << "NO" << endl;
				break;
			}
		}
		if(!find){
			cout << "YES" << endl;
		}
	}
}
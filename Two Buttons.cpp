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
	int n,m;
	cin >> n >> m;
	if(n>=m){
		cout << n-m << endl;
	}else{
		int m1=0;
		int val1=n,val2=m;
		while(val2>val1){
			if(val2%2==0){
				val2/=2;
			}else{
				val2=(val2+1)/2;
				m1+=1;
			}
			m1+=1;
		}
		m1+=(val1-val2);
		cout << m1 << endl;
	}
}
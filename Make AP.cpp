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
		long long a,b,c;
		cin >> a >> b >> c;
		bool ans=false;
		if(a==b==c){
			ans=true;
		}
		if((c-a)%2==0){
			long long mid=(c-a)/2;
			if((a+mid)%b==0 && (c-mid)%b==0 && a+mid>0 && c-mid>0){
//				cout << "1" << endl;
				ans=true;
			}
		}
		long long m1=(b-a);
		long long m2=(c-b);
		if((b+(m1))%c==0 && (a+(2*m1))%c==0 && b+m1>0 && a+(2*m1)>0){
			ans=true;
//			cout << "2" << endl;
		}
		if((b-m2)%a==0 && (c-(2*m2))%a==0 && b-m2>0 && (c-(2*m2))>0){
			ans=true;
//			cout << "3" << endl;
		}
		if(ans){
			cout << "YES" << endl;
		}else{
			cout << "NO" << endl;
		}
	}
}
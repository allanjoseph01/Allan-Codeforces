#include<bits/stdc++.h>
using namespace std;
#ifdef LOCAL
#include "algo/debug.h"
#else
#define debug(...) 42
#endif
long long n,q;
long long solve(long long que,vector<long long>& vp){
	long long high=n-1;
	long long low=0;
	long long ans=-1;
	long long mid;
	while(low<=high){
		mid=(high+low)/2;
		if(vp[mid]<=que){
			ans=mid;
			low=mid+1;
		}else{
			high=mid-1;
		}
	}
	return ans;
}
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	int t;
	cin >> t;
	for(int _=0;_<t;_++){
		cin >> n >> q;
		vector<long long> a(n),k(q),prefixmax(n),prefixsum(n);
		cin >> a[0];
		prefixmax[0]=prefixsum[0]=a[0];
		for(int i=1;i<n;i++){
			cin >> a[i];
			prefixmax[i]=max(prefixmax[i-1],a[i]);
			prefixsum[i]=prefixsum[i-1]+a[i];
		}
		for(int j=0;j<q;j++){
			cin >> k[j];
		}
		for(int j=0;j<q;j++){
			long long pos=solve(k[j],prefixmax);
			if(pos!=-1){
				cout << prefixsum[pos] << " ";
			}else{
				cout << "0" << " ";
			}	
		}
		cout << endl;
	}
}
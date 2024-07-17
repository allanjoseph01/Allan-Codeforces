#include<bits/stdc++.h>
using namespace std;
#ifdef LOCAL
#include "algo/debug.h"
#else
#define debug(...) 42
#endif
bool check(int be,vector<pair<long long,int>>& vp,vector<long long>& pfs,long long com){
	if(be==0){
		return true;
	}
	if((pfs[be-1])>=(vp[be].first) || (com>=vp[be].first)){
		return true;
	}
	return false;
}
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	int t;
	cin >> t;
	for(int _=0;_<t;_++){
		int n;
		cin >> n;
		vector<pair<long long,int>> arr(n);
		for(int i=0;i<n;i++){
			cin >> arr[i].first;
			arr[i].second=i;
		}
		sort(arr.begin(),arr.end());
		vector<long long> prefixsum(n);
		prefixsum[0]=arr[0].first;
		for(int i=1;i<n;i++){
			prefixsum[i]=(prefixsum[i-1])+arr[i].first;
		}
		vector<int> ansv(n, 0);
		for(int i=0;i<n;i++){
			int j=arr[i].second;
			int low=0;
			int high=n-1;
			int ans=0;
			int mid;
			while(low<=high){
				mid=(low+high)/2;
				if(check(mid,arr,prefixsum,arr[i].first)){
					low=mid+1;
					ans=mid;
				}else{
					high=mid-1;
				}
			}
			ansv[j]=ans;
		}
		for(int i=0;i<n;i++){
			cout << ansv[i] << " ";
		}
		cout << endl;
	}
}
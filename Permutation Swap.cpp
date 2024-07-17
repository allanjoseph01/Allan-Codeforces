#include<bits/stdc++.h>
using namespace std;
#ifdef LOCAL
#include "algo/debug.h"
#else
#define debug(...) 42
#endif
int arr[100000];
int arr2[100000];
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	int t;
	cin >> t;
	for(int _=0;_<t;_++){
		int n;
		cin >> n;
		for(int i=0;i<n;i++){
			cin >> arr[i];
			arr2[i]=i+1;
		}
		int ans=INT_MAX;
		map<int,int>count;
		for(int i=0;i<n;i++){
			int diff=abs(arr[i]-arr2[i]);
			if(count.find(diff)==count.end()){
				count.insert(make_pair(diff,1));
			}else{
				count[diff]+=1;
			}
			if(diff!=0){
				ans=min(ans,diff);
			}
		}
		cout << ans << endl;
	}
}
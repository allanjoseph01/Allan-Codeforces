#include<bits/stdc++.h>
using namespace std;
#ifdef LOCAL
#include "algo/debug.h"
#else
#define debug(...) 42
#endif
//long long arr[100000];
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	int t;
	cin >> t;
	for(int _=0;_<t;_++){
		int n;
		char c;
		cin >> n >> c;
		string s;
		cin >> s;
		int count=0;
		for(int i=0;i<n;i++){
			if(s[i]==c){
				int high=n;
				int low=0;
				int ans=0;
				int mid;
				while(low<=high){
					mid=(low+high)/2;
					if(s[(i+mid)%n]=='g'){
//						cout << mid << i << endl;
						high=mid-1;
						ans=mid;
					}else{
						low=mid+1;
					}
				}
				count=max(count,ans);
			}
		}
		cout << count << endl;
	}
}
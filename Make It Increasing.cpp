#include<bits/stdc++.h>
using namespace std;
#ifdef LOCAL
#include "algo/debug.h"
#else
#define debug(...) 42
#endif
long long arr[30];
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	int t;
	cin >> t;
	for(int _=0;_<t;_++){
		int n;
		cin >> n;
		cin >> arr[0];
		int index=-1;
		for(int i=1;i<n;i++){
			cin >> arr[i];
			if(arr[i]<=arr[i-1]){
				index=i;
			}
		}
		if(index==-1){
			cout << "0" << endl;
		}else{
			bool valid=true;
			long long ans=0;
			for(int j=index-1;j>=0;j--){
				long long c=0;
				while(arr[j]>=arr[j+1]){
					if(arr[j+1]==0){
						valid=false;
						break;
					}
					arr[j]/=2;
					c+=1;
				}
				ans+=c;
			}
			if(valid){
				cout << ans << endl;
			}else{
				cout << "-1" << endl;
			}
		}
	}
}
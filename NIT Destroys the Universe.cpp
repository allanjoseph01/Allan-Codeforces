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
		int n;
		cin >> n;
		bool zero=true;
		for(int i=0;i<n;i++){
			cin >> arr[i];
			if(arr[i]!=0){
				zero=false;
			}
		}
		if(zero){
			cout << "0" << endl;
		}else{
			int count=0;
			for(int i=0;i<n;i++){
				if(arr[i]==0 && i!=n-1){
					count+=1;
				}
				if(count>=2){
					break;
				}
			}
			int ans=0;
			int j=0;
			while(j<n){
				if(arr[j]==0){
					j+=1;
				}else{
					ans+=1;
					while(arr[j]!=0 && j<n){
						j+=1;
					}
				}
			}
			if((arr[0]==0 && count==1) || (count==0)){
				cout << min(ans,1) << endl;
			}else{
				cout << min(ans,2) << endl;				
			}
		}
	}
}
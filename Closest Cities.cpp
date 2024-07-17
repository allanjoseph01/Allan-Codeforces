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
		for(int i=0;i<n;i++){
			cin >> arr[i];
		}
		vector<long long> prefront(n),suffback(n);
		prefront[0]=0;
		prefront[1]=1;
		suffback[n-1]=0;
		suffback[n-2]=1;
		for(int j=2;j<n;j++){
			if((arr[j]-arr[j-1])>(arr[j-1]-arr[j-2])){
				prefront[j]=(arr[j]-arr[j-1])+prefront[j-1];
			}else{
				prefront[j]=prefront[j-1]+1;
			}
		}
		for(int j=n-3;j>=0;j--){
			if((arr[j+1]-arr[j])>(arr[j+2]-arr[j+1])){
				suffback[j]=(arr[j+1]-arr[j])+suffback[j+1];
			}else{
				suffback[j]=suffback[j+1]+1;
			}
		}
		int m;
		cin >> m;
		for(int i=0;i<m;i++){
			int x,y;
			cin >> x >> y;
			if(y>x){
				cout << prefront[y-1]-prefront[x-1] << endl;
			}else{
				cout << suffback[y-1]-suffback[x-1] << endl;
			}
		}
	}
}
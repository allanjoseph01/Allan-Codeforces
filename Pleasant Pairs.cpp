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
		vector<int> vec((2*n),-1);
		for(int i=0;i<n;i++){
			cin >> arr[i];
			if(arr[i]<=((2*n)-1)){
				vec[arr[i]]=i+1;
			}
		}
		long long count=0;
		for(int i=3;i<=(2*n)-1;i++){
			for(int j=1;j*j<i;j++){
				if(i%j==0){
					if(vec[j]!=-1 && vec[i/j]!=-1 && (vec[j]+vec[i/j]==i)){
						count+=1;
					}
				}
			}
		}
		cout << count << endl;
	}
}
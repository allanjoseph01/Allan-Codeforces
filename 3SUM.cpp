#include<bits/stdc++.h>
using namespace std;
#ifdef LOCAL
#include "algo/debug.h"
#else
#define debug(...) 42
#endif
long long arr[200000];
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	int t;
	cin >> t;
	for(int _=0;_<t;_++){
		int n;
		cin >> n;
		vector<int> rem(10,0);
		for(int i=0;i<n;i++){
			cin >> arr[i];
			rem[arr[i]%10]++;
		}
		bool find=false;
		for(int i=0;i<10;i++){
			for(int j=0;j<10;j++){
				for(int k=0;k<10;k++){
					if(rem[i]>0 && rem[j]>0 && rem[k]>0){
						bool same=true;
						if(i==j==k && rem[i]<3){
							same=false;
						}
						if((i==j || j==k) && rem[j]<2){
							same=false;
						}
						if(i==k && rem[i]<2){
							same=false;
						}
						if(((i+j+k)%10)==3 && same){
							find=true;
							break;
						}
					}
				}
				if(find){
					break;
				}
			}
			if(find){
				break;
			}
		}
		if(find){
			cout << "YES" << endl;
		}else{
			cout << "NO" << endl;
		}
	}
}
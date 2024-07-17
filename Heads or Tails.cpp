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
	int x,y,a,b;
	cin >> x >> y >> a >> b;
	vector<pair<int,int>> vp;
	while(a<=x){
		int num=b;
		while(num<=y && num<a){
			vp.push_back(make_pair(a,num));
			num++;
		}
		a++;
	}
	sort(vp.begin(),vp.end());
	cout << vp.size() << endl;
	for(int i=0;i<vp.size();i++){
		cout << vp[i].first << " " << vp[i].second << endl;
	}
}
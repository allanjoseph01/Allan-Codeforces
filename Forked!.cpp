#include<bits/stdc++.h>
using namespace std;
#ifdef LOCAL
#include "algo/debug.h"
#else
#define debug(...) 42
#endif
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	int t;
	cin >> t;
	for(int _=0;_<t;_++){
		long long a,b;
		cin >> a >> b;
		long long arr[4];
		cin >> arr[0] >> arr[1] >> arr[2] >> arr[3];
		vector<pair<long long,long long>>k,q;
		map<pair<long long,long long>,int> plco;
		for(int i=0;i<2;){
			k.push_back(make_pair(arr[i]+a,arr[i+1]+b));
			k.push_back(make_pair(arr[i]+a,arr[i+1]-b));
			k.push_back(make_pair(arr[i]+b,arr[i+1]+a));
			k.push_back(make_pair(arr[i]+b,arr[i+1]-a));
			k.push_back(make_pair(arr[i]-a,arr[i+1]+b));
			k.push_back(make_pair(arr[i]-a,arr[i+1]-b));
			k.push_back(make_pair(arr[i]-b,arr[i+1]+a));
			k.push_back(make_pair(arr[i]-b,arr[i+1]-a));
			i+=2;
		}
		for(int i=2;i<4;){
			q.push_back(make_pair(arr[i]+a,arr[i+1]+b));
			q.push_back(make_pair(arr[i]+a,arr[i+1]-b));
			q.push_back(make_pair(arr[i]+b,arr[i+1]+a));
			q.push_back(make_pair(arr[i]+b,arr[i+1]-a));
			q.push_back(make_pair(arr[i]-a,arr[i+1]+b));
			q.push_back(make_pair(arr[i]-a,arr[i+1]-b));
			q.push_back(make_pair(arr[i]-b,arr[i+1]+a));
			q.push_back(make_pair(arr[i]-b,arr[i+1]-a));
			i+=2;
		}
		int count=0;
		for(int j=0;j<8;j++){
			for(int s=0;s<8;s++){
				if(k[j].first==q[s].first && k[j].second==q[s].second && plco.find(k[j])==plco.end()){
//					cout << k[j].first << " " << q[s].first << endl;
//					cout << k[j].second << " " << q[s].second << endl;
					plco.insert({k[j],1});
					count+=1;
					break;
				}	
			}
		}
		cout << count << endl;
	}
}
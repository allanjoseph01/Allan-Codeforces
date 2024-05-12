#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	for(int _=0;_<t;_++){
		int a,b;
		cin >> a >> b;
		int xk,yk;
		cin >> xk >> yk;
		int xq,yq;
		cin >> xq >> yq;
		vector<pair<int,int>>posk;
		posk.push_back(make_pair(xk-a,yk-b));
		posk.push_back(make_pair(xk-b,yk-a));
		posk.push_back(make_pair(xk+a,yk+b));
		posk.push_back(make_pair(xk+b,yk+a));
		posk.push_back(make_pair(xk-a,yk+b));
		posk.push_back(make_pair(xk+b,yk-a));
		posk.push_back(make_pair(xk+a,yk-b));
		posk.push_back(make_pair(xk-b,yk+a));
		vector<pair<int,int>>posq;
		posq.push_back(make_pair(xq-a,yq-b));
		posq.push_back(make_pair(xq-b,yq-a));
		posq.push_back(make_pair(xq+a,yq+b));
		posq.push_back(make_pair(xq+b,yq+a));
		posq.push_back(make_pair(xq-a,yq+b));
		posq.push_back(make_pair(xq+b,yq-a));
		posq.push_back(make_pair(xq+a,yq-b));
		posq.push_back(make_pair(xq-b,yq+a));
		int count=0;
		for(int i=0;i<8;i++){
			int j;
			for(j=0;j<8;j++){
				if(posk[i].first==posq[j].first && posk[i].second==posq[j].second){
					count+=1;
					break;
				}
			}
			if(posk[i].first==posq[j].first && posk[i].second==posq[j].second){
				continue;
			}
		}
		if(xk!=xq){
            if(((yk-yq)/(xk-xq))==1){
                cout << count << endl;
            }else{
                cout << count/2 << endl;
            }
        }else{
            cout << count << endl;
        }
	}
}
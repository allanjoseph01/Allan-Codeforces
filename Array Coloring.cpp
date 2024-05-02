#include<bits/stdc++.h>
using namespace std;
int arr[50];
int main(){
	int t;
	cin >> t;
	for(int _=0;_<t;_++){
		int n;
		cin >> n;
		vector<pair<string,int>>oddeve;
		oddeve.push_back(make_pair("Even",0));
		oddeve.push_back(make_pair("Odd",0));
		for(int i=0;i<n;i++){
			cin >> arr[i];
			oddeve[arr[i]%2==0].second+=1;
		}
		if(oddeve[0].second>=oddeve[1].second && (oddeve[0].second>1 && oddeve[1].second>1)){
			cout << "YES" << endl;
		}else{
			if((oddeve[1].second-oddeve[0].second)%2==0 && (oddeve[1].second-oddeve[0].second!=0)){
				cout << "NO" << endl;
 			}else{
 				cout << "YES" << endl;
			 }
		}
	}
}
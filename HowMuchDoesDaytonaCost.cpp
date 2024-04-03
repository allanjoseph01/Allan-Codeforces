#include<bits/stdc++.h>
using namespace std;
int arr[100];
int main(){
	int t;
	cin >> t;
	for(int _=0;_<t;_++){
		int n,k;
		cin >> n >> k;
		int count=0;
		for(int i=0;i<n;i++){
			cin >> arr[i];
			if(arr[i]==k){
				count+=1;
			}
		}
		if(count>0){
			cout << "YES" << endl;
		}else{
			cout << "NO" << endl;
		}
	}
}
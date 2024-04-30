#include<bits/stdc++.h>
using namespace std;
int arr[200000];
int main(){
	int n,k;
	cin >> n >> k;
	for(int i=0;i<n;i++){
		cin >> arr[i];
	}
	sort(arr,arr+n);
	if(arr[k]!=arr[k-1] && arr[k]-arr[k-1]>=2){
		cout << arr[k-1]+1 << endl;
	}else{
		cout << "-1" << endl;
	}
}
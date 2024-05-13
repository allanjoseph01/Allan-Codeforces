#include<bits/stdc++.h>
using namespace std;
int arr[200000];
int main(){
	int t;
	cin >> t;
	for(int _=0;_<t;_++){
		int n;
		cin >> n;
		for(int i=0;i<n;i++){
			cin >> arr[i];
		}
		sort(arr,arr+n);
		int count=0;
		for(int j=0;j<n;){
			if(arr[j]==arr[j+1]){
				count+=1;
				j+=2;
			}else{
				j+=1;
			}
		}
		cout << count << endl;
	}
}
#include<bits/stdc++.h>
using namespace std;
long long arr[100000];
int main(){
	int n;
	cin >> n;
	for(int i=0;i<n;i++){
		cin >> arr[i];
	}
	int maxi=0;
	for(int j=0;j<n;){
		int c=1;
		while(j<n-1){
			if(arr[j+1]<arr[j]){
				break;
			}
			c+=1;
			j+=1;
		}
		j+=1;
		maxi=max(maxi,c);
	}
	cout << maxi << endl;
}
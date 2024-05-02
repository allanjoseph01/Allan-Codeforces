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
		vector<int>ans;
		ans.push_back(arr[0]);
		int count=1;
		for(int j=1;j<n;j++){
			if(arr[j]<arr[j-1]){
				if(arr[j]==1){
					ans.push_back(1);
					ans.push_back(1);
					count+=2;
				}else{
					ans.push_back(min(arr[j]-1,arr[j-1]-1));
					ans.push_back(arr[j]);
					count+=2;
				}
			}else{
				ans.push_back(arr[j]);
				count+=1;
			}
		}
		cout << count << endl;
		for(int k=0;k<count;k++){
			cout << ans[k] << " ";
		}
		cout << endl;
	}
}
#include<bits/stdc++.h>
using namespace std;
int checkint(int lst[100],int num,int size){
	if(num%2==0){
		int counteven=0;
		int countodd=0;
		for(int i=0;i<size;i++){
			if(lst[i]%2==0){
				counteven+=1;
			}else{
				countodd+=1;
			}
			if(counteven==1 || countodd==1){
				return true;
			}
		}
		return false;
	}else{
		int counteven=0;
		int countodd=0;
		for(int i=0;i<size;i++){
			if(lst[i]%2==0 && counteven==0){
				counteven+=1;
			}else if(countodd==0){
				countodd+=1;
			}
			if(counteven==1 && countodd==1){
				return true;
			}
		}
		return false;
	}
}
int arr[100];
int arr1[100];
int main(){
	int t;
	cin >> t;
	for(int _=0;_<t;_++){
		int n,k,x;
		cin >> n >> k >> x;
		int j=0;
		for(int i=1;i<k+1;i++){
			if(i!=x){
				arr[j]=i;
				j+=1;
			}
		}
		if(checkint(arr,n,j)){
			cout << "YES" << endl;
			int diff=n;
			int count=0;
			int sum=0;
			int u=0;
			while(sum<n){
				for(int h=j-1;h>=0;){
					if(arr[h]<=diff){
						sum+=arr[h];
						diff-=arr[h];
						arr1[u]=arr[h];
						u+=1;
						count+=1;
					}else{
						h-=1;
					}
				}
			}
			cout << count << endl;
			for(int o=0;o<u;o++){
				cout << arr1[o] << " ";
			}
			cout << endl;
		}else{
			cout << "NO" << endl;
		}
	}
}
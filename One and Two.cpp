#include<bits/stdc++.h>
using namespace std;
int countnum(int lst[1000],int num, int size){
	int count=0;
	for(int i=0;i<size;i++){
		if(lst[i]==num){
			count+=1;
		}
	}
	return count;
}
int arr[1000];
int main(){
	int t;
	cin >> t;
	for(int _=0;_<t;_++){
		int n;
		cin >> n;
		for(int i=0;i<n;i++){
			cin >> arr[i];
		}
		int count1=countnum(arr,1,n);
		int count2=countnum(arr,2,n);
		if(count2%2==0 && count2>0){
			int count=0;
			int j=0;
			while(count!=(count2/2)){
				if(arr[j]==2){
					count+=1;
				}
				j+=1;
			}
			cout << j << endl;
		}else if(count2==0){
			cout << "1" << endl;
		}else{
			cout << "-1" << endl;
		}
	}
}
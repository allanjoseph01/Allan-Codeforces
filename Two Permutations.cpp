#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	for(int i=0;i<t;i++){
		int n,a,b;
		cin >> n >> a >> b;
		if(n==a && a==b){
			cout << "Yes" << endl;
		}else if((n-(a+b))>=2){
			cout << "Yes" << endl;
		}else{
			cout << "No" << endl;
		}
	}	
}
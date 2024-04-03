#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	for(int _=0;_<t;_++){
		long long n,k;
		cin  >> n >> k;
		if(n%k==0 || n%2==0 || n%(k+2)==0 || (n-k)%2==0 || (n-2)%k==0){
			cout << "YES" << endl;
		}else{
			cout << "NO" << endl;
		}
	}
}
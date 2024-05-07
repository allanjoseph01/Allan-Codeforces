#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	for(int _=0;_<t;_++){
		long long x,n;
		cin >> x >> n;
		for(int i=0;i<n;i++){
			if(x>=0){
				if(x%2==0){
					x-=(i+1);
				}else{
					x+=(i+1);
				}
			}else{
				if(((-1)*(x))%2==0){
					x-=(i+1);
				}else{
					x+=(i+1);
				}
			}
			
		}
		cout << x << endl;
	}
}
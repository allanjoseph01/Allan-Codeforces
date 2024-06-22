#include<bits/stdc++.h>
using namespace std;
long long solve(long long a,long long b){
	int c=a^b;
	int d=1;
	while(c%2==0){
		c=c>>1;
		d=d<<1;
	}
	return d;
}
int main(){
	int test;
	cin >> test;
	for(int _=0;_<test;_++){
		long long x,y;
		cin >> x >> y;
		cout << solve(x,y) << endl;
	}
}
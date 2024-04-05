#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	for(int _=0;_<t;_++){
	long long n;
	cin >> n;
	if(n%2==1){
		cout<<"-1"<<endl;
	}else{
		long long x=n;
		long long d=0;
		while((x%6)!=0 || (x%6)%4!=0){
			x-=1;
			d+=1;
		} 
		float z=x/6;
	    
	long long k=n;
	long long di=0;
	while(k%4!=0 || ((k%4)%6)!=0){
		k-=1;
		di+=1;
	}
	cout<<(k/4)+(di/6)<<endl;
}
}
}
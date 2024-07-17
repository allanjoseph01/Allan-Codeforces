#include<bits/stdc++.h>
using namespace std;
#ifdef LOCAL
#include "algo/debug.h"
#else
#define debug(...) 42
#endif
int n,m;
//int gcd(int a,int b){
//    while(b!= 0){
//        int temp=b;
//        b=a%b;
//        a=temp;
//    }
//    return a;
//}
string what(char sign,int nm,vector<bool>& sw){
	if(sign=='+'){
		if(nm==1 && sw[nm]){
			return "Already on";
		}
		if(nm==1 && !sw[nm]){
			sw[nm]=true;
			return "Success";
		}
		if(sw[nm]){
			return "Already on";
		}
		bool find=false;
		int index=-1;
		for(int i=2;i<=n+1;i++){
//			cout << gcd(i,nm) << endl;
			if(nm%i==0 || i%nm==0){
				for(int j=i;j<=n+1;j=(j+i)){
//					cout << j << endl;
					if(sw[j]){
						find=true;
						index=j;
						break;
					}
				}
			}
			if(find){
				break;
			}
		}
		if(find){
			return "Conflict with " + to_string(index);
		}else{
			sw[nm]=true;
			return "Success";
		}
	}else{
		if(sw[nm]){
			sw[nm]=false;
			return "Success";
		}else{
			return "Already off";
		}
	}
}
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cin >> n >> m;
	vector<bool> on(n+1, false);
	for(int i=0;i<m;i++){
		char sym;
		int num;
		cin >> sym >> num;
		string ans=what(sym,num,on);
		cout << ans << endl;
	}
}